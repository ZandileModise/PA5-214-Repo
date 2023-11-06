//
// Created by 77089 on 2023/10/31.
//

#include <iostream>
#include "TotalOrders.h"
#include "OrderFactory.h"

TotalOrders::TotalOrders() = default;

void TotalOrders::addOrder(const std::string &orderType) {
    auto it = orders.find(orderType);
    if (it != orders.end()) {
        it->second->incrementQuantity();
    } else {
        OrderFactory orderFactory;
        orders[orderType] = orderFactory.createOrder(orderType);
    }
}


double TotalOrders::calculateTotalPrice() {
    double totalPrice = 0.0;
    for (auto& order : orders) {
        totalPrice += order.second->getPrice();
    }
    return totalPrice;
}

void TotalOrders::printOrders() {
    for (auto& order : orders) {
        std::cout << order.second->getOrderType() << " Quantity:"<< order.second->getQuantity() <<std::endl;
    }
}

void TotalOrders::prepareAndDeliverOrders() {
    for (auto& order : orders) {
        order.second->prepare();
        order.second->deliver();
    }
}

TotalOrders::TotalOrders(const TotalOrders& other) {
    for (auto& order : other.orders) {
        this->orders[order.first] = order.second->clone();
    }
}

TotalOrders& TotalOrders::operator=(const TotalOrders& other) {
    if (this == &other) {
        return *this;
    }

    // Here we delete the current objects
    for(auto& order : this->orders) {
        delete order.second;
    }

    // Clear the orders map
    this->orders.clear();

    // Copy the orders from the other object
    for (auto& order : other.orders) {
        this->orders[order.first] = order.second->clone();
    }

    return *this;
}

bool TotalOrders::Paid() {
    if (orders.empty()) {
        return false;
    } else {
        return true;
    }
}

TotalOrders::~TotalOrders() {

}
