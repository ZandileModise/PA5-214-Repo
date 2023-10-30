#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "OrderMemento.h"

class Order {
public:
    Order(int tableNumber);
    void addDish(const std::string& dish);
    int getTableNumber() const;
    void display() const;
    OrderMemento saveToMemento() const;
    void restoreFromMemento(const OrderMemento& memento);

private:
    int tableNumber;
    std::vector<std::string> dishes;
};

#endif // ORDER_H