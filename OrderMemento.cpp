#include "OrderMemento.h"

OrderMemento::OrderMemento(int tableNumber, const std::vector<std::string>& dishes)
    : tableNumber(tableNumber), dishes(dishes) {}

int OrderMemento::getTableNumber() const {
    return tableNumber;
}

std::vector<std::string> OrderMemento::getDishes() const {
    return dishes;
}