//
// Created by 77089 on 2023/10/28.
//

#include <iostream>
#include <algorithm>
#include <unistd.h>
#include "Restaurant.h"
#include "TableIterator.h"
/**
 * @file Restaurant.cpp
 * @brief Implementation of the Restaurant class, it uses the Singleton pattern to ensure that only one instance of the restaurant is created, and flyweight pattern to ensure that only ten instance of the tables are created
 * @date [date]
 */
using namespace std;
Restaurant* Restaurant::instance = nullptr;

Restaurant::Restaurant() {
for (int i = 0; i < 10; i++) {
        Table table(i + 1);
        tables.push_back(table);
    }
}

void Restaurant::acceptCustomers(int numOfCustomers) {
    int requiredTables = ((numOfCustomers % 4 == 0) ? numOfCustomers / 4 : (numOfCustomers / 4 + 1));
    std::vector<int> reservedTables;
    Iterator* tableIterator = createIterator();
    tableIterator->first();
    for (auto &table : tables) {
        if (table.isAvailable && requiredTables > 0) {
            table.MarkReserved();
            reservedTables.push_back(table.id);
            requiredTables--;
        }
    }
delete tableIterator;
    if (requiredTables == 0) {
        std::cout << "Customers will be seated at table: ";
        for (auto t : reservedTables) {
            std::cout << t << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "Not enough tables available for " << numOfCustomers << " customers." << "\n";
    }
}


Restaurant* Restaurant::GetInstance() {
    if (instance == nullptr) {
        instance = new Restaurant();
    }
    return instance;
}

void Restaurant::MakeTableAvailable(int tableId) {
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        table->MakeAvailable();
    }
    cout<<"Table "<<tableId<<" is now available"<<endl;
}


void Restaurant::createOrder(int tableId, const std::vector<std::string>& orderTypes) {
    if (isWaiterAssigned(tableId)) {
        cout <<"Waiter is coming to take order for Table No."<< tableId << endl;
        cout<< "Confirming order" << endl;
        auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
        if (table != tables.end()) {
            if (table->isAvailable) {
                std::cout << "Table " << tableId << " is not reserved." << "\n";
            } else {
                if (totalOrders.find(tableId) == totalOrders.end()) {
                    TotalOrders newTotalOrders; // Create a new TotalOrders object
                    for (const std::string& orderType : orderTypes) {
                        newTotalOrders.addOrder(orderType);
                    }
                    this->totalOrders[tableId] = newTotalOrders;
                } else {
                    for (const std::string& orderType : orderTypes) {
                        this->totalOrders[tableId].addOrder(orderType);
                    }
                }
            }
        }
    } else {
        std::cout << "No waiter is available for table " << tableId << ". Order cannot be placed." << std::endl;
    }
}


void Restaurant::prepareAndDeliverOrders(int tableId) {
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
        } else {
            if (totalOrders.find(tableId) == totalOrders.end()) {
                std::cout << "No orders for table " << tableId << "\n";
            } else {
                this->totalOrders[tableId].prepareAndDeliverOrders();
            }
        }
    }
}

void Restaurant::printOrders(int tableId) {
    cout<< "Order Confirmed" << endl;
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
        } else {
            if (totalOrders.find(tableId) == totalOrders.end()) {
                std::cout << "No orders for table " << tableId << "\n";
            } else {
                cout << "Orders for table"<< tableId << ":\n";
                cout << "-------------------\n";
                this->totalOrders[tableId].printOrders();
            }
        }
    }
}

float Restaurant::calculateTotalPrice(int tableId) {
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
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
    cout << "Receipt for table"<< tableId << ":\n";
    cout << "------------------------------------\n";
}

void Restaurant::printReceiptFooter(int tableId) {
    cout << "------------------------------------\n";
    cout << "Total price: " << this->totalOrders[tableId].calculateTotalPrice() << "\n";
}

void Restaurant::printReceiptBody(int tableId) {
    this->totalOrders[tableId].printOrders();
}


void Restaurant::printReceipt(int tableId) {//-------------------------------------------------- this is the template method
    printReceiptHeader(tableId);
    printReceiptBody(tableId);
    printReceiptFooter(tableId);
}

Restaurant* Restaurant::clone() {
    Restaurant* newRestaurant = new Restaurant();

    for (const Table& originalTable : this->tables) {
        Table newTable = Table(originalTable.id);
        newRestaurant->tables.push_back(newTable);
    }

    for (const auto& entry : this->totalOrders) {
        newRestaurant->totalOrders[entry.first] = entry.second;
    }

    return newRestaurant;
}

RestaurantMomento* Restaurant::save(int saveId) {
    std::vector<Table> currentTables(this->tables);
    std::map<int, TotalOrders> currentTotalOrders;
    for (const auto& order : this->totalOrders){
        currentTotalOrders[order.first] = TotalOrders(order.second);
    }
    return new RestaurantMomento(currentTables, currentTotalOrders, saveId);
}

void Restaurant::restore(RestaurantMomento* momento) {
    this->tables = momento->getTables();
    this->totalOrders = momento->getTotalOrders();
}

bool Restaurant::Paid(int tableId) {
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
        } else {
            if (totalOrders.find(tableId) == totalOrders.end()) {
                std::cout << "No orders for table " << tableId << "\n";
            } else {
                return this->totalOrders[tableId].Paid();
            }
        }
    }
    return false;
}

void Restaurant::MakePayment(int tableId) {
    if (isWaiterAssigned(tableId) == true){
        cout << "Customer is paying for table " << tableId << endl;
        cout << "Waiter is coming with bill for Table No." << tableId << endl;
        if(ifwantToSplitBill(tableId)){
            printReceipt(tableId);
            sleep(1);
            splitBill(tableId);
        }
        else{    printReceipt(tableId);
            sleep(1);
            MakeTableAvailable(tableId);
            sleep(1);
            cout<<"Payment has been Made for Table No." << tableId << endl;}
    }
    else {
        cout << "No waiter is available to table, cannot pay " << endl;
    }

}

void Restaurant::CleanOrders(int tableId) {
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
        } else {
            if (totalOrders.find(tableId) == totalOrders.end()) {
                std::cout << "No orders for table " << tableId << "\n";
            } else {
                this->totalOrders.erase(tableId);
            }
        }
    }
}

void Restaurant::assignWaiter(int tableId) {
    Waiter waiter(tableId);
    waiters.push_back(waiter);
    waiters.back().assignTable(tableId);
    cout << "Waiter No." << waiters.back().getWaiterId() << " is assigned to table " << tableId << endl;
}


void Restaurant::displayWaiter(int tableId) {
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        cout << "a Waiter is assigned to table " << tableId << endl;
    }
}

bool Restaurant::isWaiterAssigned(int tableId) {
    for (auto &waiter : waiters) {
        for (auto &assignedTable : waiter.getAssignedTables()) {
            if (assignedTable == tableId) {
                return true;
            }
        }
    }
    return false;
}

void Restaurant::removeWaiter(int tableId) {
    cout<<"Waiter is busy for now"<<endl;
    for (auto &waiter : waiters) {
        for (auto &assignedTable : waiter.getAssignedTables()) {
            if (assignedTable == tableId) {
                waiter.removeTable(tableId);
            }
        }
    }
}

Iterator *Restaurant::createIterator() {
    return new TableIterator(tables);
}

Restaurant::~Restaurant() {

}


void Restaurant::prepare(int tableId) {
    cout << "Preparing orders for table No." << tableId << endl;
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
        } else {
            if (totalOrders.find(tableId) == totalOrders.end()) {
                std::cout << "No orders for table " << tableId << "\n";
            } else {
                this->totalOrders[tableId].prepare();
            }
        }
    }
    cout << "Orders for table No." << tableId << " are ready" << endl;
}

void Restaurant::deliver(int tableId) {
    cout << "Delivering orders for table No." << tableId << endl;
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
        } else {
            if (totalOrders.find(tableId) == totalOrders.end()) {
                std::cout << "No orders for table " << tableId << "\n";
            } else {
                this->totalOrders[tableId].deliver();
            }
        }
    }
    cout << "Orders for table No." << tableId << " are delivered" << endl;
    cout << "Customer is eating" << endl;
}

int Restaurant::getNumberOfCustomersAtTable(int tableId) {
    // Check if the table is reserved
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
            return 0;
        }
    } else {
        std::cout << "Table " << tableId << " not found." << "\n";
        return 0;
    }

    // Check if there are orders for the table
    if (totalOrders.find(tableId) == totalOrders.end()) {
        std::cout << "No orders for table " << tableId << "\n";
        return 0;
    }

    // Get the number of customers at the table
    return totalOrders[tableId].getNumberOfCustomers();
}

void Restaurant::splitBill(int tableId) {
    auto table = std::find_if(tables.begin(), tables.end(), [tableId](Table &table) { return table.id == tableId; });
    if (table != tables.end()) {
        if (table->isAvailable) {
            std::cout << "Table " << tableId << " is not reserved." << "\n";
            return;
        }
    } else {
        std::cout << "Table " << tableId << " not found." << "\n";
        return;
    }
    if (totalOrders.find(tableId) == totalOrders.end()) {
        std::cout << "No orders for table " << tableId << "\n";
        return;
    }
    if (!isWaiterAssigned(tableId)) {
        std::cout << "No waiter is available for table " << tableId << ". Cannot split the bill." << std::endl;
        return;
    }

    float totalPrice = calculateTotalPrice(tableId);
    int numCustomers = getNumberOfCustomersAtTable(tableId);
    float individualShare = totalPrice / numCustomers;
    std::cout << "Splitting the bill for table " << tableId << " among " << numCustomers << " Orders:" << std::endl;
    for (int i = 1; i <= numCustomers; i++) {
        std::cout << "Order " << i << ": $" << individualShare << std::endl;
    }
}

bool Restaurant::ifwantToSplitBill(int tableId) {
    cout << "Do you want to split the bill for table " << tableId << "? (y/n)" << endl;
    string answer;
    cin >> answer;
    if (answer == "y") {
        return true;
    } else {
        return false;
    }
}



