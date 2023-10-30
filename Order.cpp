#include<iostream>
using namespace std;
#include "Order.h"

Order::Order(int tableNumber) : tableNumber(tableNumber) {}

void Order::addDish(const std::string& dish) {
    dishes.push_back(dish);
}

int Order::getTableNumber() const {
    return tableNumber;
}

void Order::display() const {
    std::cout << "Table " << tableNumber << " Order:\n";
    for (const auto& dish : dishes) {
        std::cout << "  - " << dish << "\n";
    }
}

OrderMemento Order::saveToMemento() const {
    return OrderMemento(tableNumber, dishes);
}

void Order::restoreFromMemento(const OrderMemento& memento) {
    tableNumber = memento.getTableNumber();
    dishes = memento.getDishes();
}