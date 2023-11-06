#ifndef WAITER_H
#define WAITER_H

#include <string>
#include "Order.h"

class WaiterPrototype {
public:
    virtual WaiterPrototype* clone() = 0;
    virtual void takeOrder(int tableNumber, const std::string& dish, Order& order) = 0;
    virtual void serveOrders(const Order& order) = 0;
    virtual void setID(int id) = 0;
    virtual int getID() const = 0;
    virtual ~WaiterPrototype() {}
};

class Waiter : public WaiterPrototype {
public:
    Waiter();
    WaiterPrototype* clone() override;
    void takeOrder(int tableNumber, const std::string& dish, Order& order) override;
    void serveOrders(const Order& order) override;
    void setID(int id) override;
    int getID() const override;

private:
    int id;
    // Additional attributes and methods as needed
};

#endif // WAITER_H