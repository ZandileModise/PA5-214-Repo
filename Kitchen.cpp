//
// Created by 77089 on 2023/11/6.
//

#include <iostream>
#include "Kitchen.h"

void Kitchen::prepareOrder(const std::string& orderType) {
    TotalOrders totalOrders = TotalOrders();
    totalOrders.addOrder(orderType);
    orders.push_back(totalOrders);
}

void Kitchen::deliverOrders() {
    for (auto& order : orders) {
        order.prepareAndDeliverOrders();
    }
}

void Kitchen::printOrders() {
    for (auto& order : orders) {
        order.printOrders();
    }
}