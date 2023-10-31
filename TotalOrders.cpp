//
// Created by 77089 on 2023/10/31.
//

#include <iostream>
#include "TotalOrders.h"
#include "OrderFactory.h"

void TotalOrders::addOrder(const std::string &orderType) {
    // 检查是否已存在相同类型的订单
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