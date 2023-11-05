#ifndef ORDER_H
#define ORDER_H

#include <string>
#include <vector>
#include "OrderMemento.h"

class Order {
    float price;
    int quantity;
public:
    Order();
    virtual ~Order() {};
    virtual float getPrice() const = 0;
    virtual void prepare() = 0;
    virtual void deliver() = 0;
    virtual std::string getOrderType() const = 0;
    virtual void incrementQuantity();
    virtual int getQuantity() const;
    virtual Order* clone() = 0;
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