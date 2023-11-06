//
// Created by 77089 on 2023/10/28.
//

#include "Restaurant.h"
#include "Exceptions.h"
#include <algorithm>
#include <iostream>

/**
 * @file Restaurant.cpp
 * @brief Implementation of the Restaurant class, it uses the Singleton pattern
 * to ensure that only one instance of the restaurant is created, and flyweight
 * pattern to ensure that only ten instance of the tables are created
 * @date [date]
 */
using namespace std;
Restaurant *Restaurant::instance = nullptr;

Restaurant::Restaurant() {
  for (int i = 0; i < 10; i++) {
    Table table(i + 1);
    tables.push_back(table);
  }
}

void Restaurant::acceptCustomers(int numOfCustomers) {
  int requiredTables = ((numOfCustomers % 4 == 0) ? numOfCustomers / 4
                                                  : (numOfCustomers / 4 + 1));
  std::vector<int> reservedTables;

  for (auto &table : tables) {
    if (table.isAvailable && requiredTables > 0) {
      table.MarkReserved();
      reservedTables.push_back(table.id);
      requiredTables--;
    }
  }

  if (requiredTables == 0) {
    std::cout << "Customers will be seated at table: ";
    for (auto t : reservedTables) {
      std::cout << t << " ";
    }
    std::cout << "\n";
  } else {
    std::cout << "Not enough tables available for " << numOfCustomers
              << " customers."
              << "\n";
  }
}

Restaurant *Restaurant::GetInstance() {
  if (instance == nullptr) {
    instance = new Restaurant();
  }
  return instance;
}

void Restaurant::MakeTableAvailable(int tableId) {
  auto table =
      std::find_if(tables.begin(), tables.end(),
                   [tableId](Table &table) { return table.id == tableId; });
  if (table != tables.end()) {
    table->MakeAvailable();
  }
}

void Restaurant::createOrder(int tableId, const string &orderType) {
  auto table =
      std::find_if(tables.begin(), tables.end(),
                   [tableId](Table &table) { return table.id == tableId; });
  if (table != tables.end()) {
    if (table->isAvailable) {
      std::cout << "Table " << tableId << " is not reserved."
                << "\n";
    } else {
        if (totalOrders.find(tableId) == totalOrders.end()) {
          TotalOrders newTotalOrders; // 使用不同的名称来创建 TotalOrders 对象
          try {
            table->state = table->state->order();
            newTotalOrders.addOrder(orderType);
            this->totalOrders[tableId] = newTotalOrders; // 确保你的映射正确命名
          } catch (Exceptions &e) {
            std::cout << e.message << "\n";
          }

        } else {
            try{
                table->state = table->state->order();
                this->totalOrders[tableId].addOrder(orderType);
            }
          
           catch (Exceptions &e) {
        std::cout << e.message << "\n";
      }
        }
      }
    }
  }


void Restaurant::prepareAndDeliverOrders(int tableId) {
  auto table =
      std::find_if(tables.begin(), tables.end(),
                   [tableId](Table &table) { return table.id == tableId; });
  if (table != tables.end()) {
    if (table->isAvailable) {
      std::cout << "Table " << tableId << " is not reserved."
                << "\n";
    } else {
      try {
        table->state = table->state->completeOrder();
        if (totalOrders.find(tableId) == totalOrders.end()) {
          std::cout << "No orders for table " << tableId << "\n";
        } else {

          this->totalOrders[tableId].prepareAndDeliverOrders();
        }
      } catch (Exceptions &e) {
        std::cout << e.message << "\n";
      }
    }
  }
}

void Restaurant::printOrders(int tableId) {
  auto table =
      std::find_if(tables.begin(), tables.end(),
                   [tableId](Table &table) { return table.id == tableId; });
  if (table != tables.end()) {
    if (table->isAvailable) {
      std::cout << "Table " << tableId << " is not reserved."
                << "\n";
    } else {
      if (totalOrders.find(tableId) == totalOrders.end()) {
        std::cout << "No orders for table " << tableId << "\n";
      } else {
        cout << "Orders for table" << tableId << ":\n";
        cout << "-------------------\n";
        this->totalOrders[tableId].printOrders();
      }
    }
  }
}

float Restaurant::calculateTotalPrice(int tableId) {
  auto table =
      std::find_if(tables.begin(), tables.end(),
                   [tableId](Table &table) { return table.id == tableId; });
  if (table != tables.end()) {
    if (table->isAvailable) {
      std::cout << "Table " << tableId << " is not reserved."
                << "\n";
    } else {
      if (totalOrders.find(tableId) == totalOrders.end()) {
        std::cout << "No orders for table " << tableId << "\n";
      } else {
        return this->totalOrders[tableId].calculateTotalPrice();
      }
    }
  }
  return 0.0;
}

void Restaurant::printReceiptHeader(int tableId) {
  cout << "Receipt for table" << tableId << ":\n";
  cout << "------------------------------------\n";
}

void Restaurant::printReceiptFooter(int tableId) {
  cout << "------------------------------------\n";
  cout << "Total price: " << this->totalOrders[tableId].calculateTotalPrice()
       << "\n";
}

void Restaurant::printReceiptBody(int tableId) {
  this->totalOrders[tableId].printOrders();
}

//-------------------------------------------------- this is the template method
void Restaurant::printReceipt(int tableId) {
  printReceiptHeader(tableId);
  printReceiptBody(tableId);
  printReceiptFooter(tableId);
}

Restaurant *Restaurant::clone() {
  Restaurant *newRestaurant = new Restaurant();

  for (const Table &originalTable : this->tables) {
    Table newTable = Table(originalTable.id);
    newRestaurant->tables.push_back(newTable);
  }

  for (const auto &entry : this->totalOrders) {
    newRestaurant->totalOrders[entry.first] = entry.second;
  }

  return newRestaurant;
}

RestaurantMomento *Restaurant::save(int saveId) {
  std::vector<Table> currentTables(this->tables);
  std::map<int, TotalOrders> currentTotalOrders;
  for (const auto &order : this->totalOrders) {
    currentTotalOrders[order.first] = TotalOrders(order.second);
  }
  return new RestaurantMomento(currentTables, currentTotalOrders, saveId);
}

void Restaurant::restore(RestaurantMomento *momento) {
  this->tables = momento->getTables();
  this->totalOrders = momento->getTotalOrders();
}

bool Restaurant::Paid(int tableId) {
  auto table =
      std::find_if(tables.begin(), tables.end(),
                   [tableId](Table &table) { return table.id == tableId; });
  if (table != tables.end()) {
    if (table->isAvailable) {
      std::cout << "Table " << tableId << " is not reserved."
                << "\n";
    } else {
      try{
        table->state = table->state->pay();
        if (totalOrders.find(tableId) == totalOrders.end()) {
        std::cout << "No orders for table " << tableId << "\n";
      } else {
        return this->totalOrders[tableId].Paid();
      }
      }
      catch(Exceptions & exc)
      {
        std::cout << exc.message << "\n";
      }
    }
  }
  return false;
}