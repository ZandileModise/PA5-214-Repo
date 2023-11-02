#include<iostream>
using namespace std;
#include "Waiter.h"

/**
 * @file Waiter.cpp
 * @brief Implementation of the Waiter class, it uses the Prototype pattern to ensure that waiters can be cloned
 * @date [date]
 */

Waiter::Waiter() {
    /// Initialize the waiter
    id = -1; /// Initialize to an invalid ID
}

WaiterPrototype* Waiter::clone() {
    /// Create a new waiter instance and copy relevant data
    Waiter* clonedWaiter = new Waiter();
    clonedWaiter->setID(this->id); // Copy ID
    return clonedWaiter;
}

void Waiter::takeOrder(int tableNumber, const std::string& dish, Order& order) {
    /// Take the customer's order and create an order object
    order.addDish(dish);
}

void Waiter::serveOrders(const Order& order) {
    /// Serve prepared orders to customers
    /// You can interact with the Kitchen and Orders here
    std::cout << "Serving orders for table " << order.getTableNumber() << ":\n";
    order.display();
}

void Waiter::setID(int id) {
    this->id = id;
}

int Waiter::getID() const {
    return id;
}