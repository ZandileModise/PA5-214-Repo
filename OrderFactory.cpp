//
// Created by 77089 on 2023/10/31.
//

#include <iostream>
#include "OrderFactory.h"
#include "PizzaOrder.h"
#include "PastaOrder.h"
#include "memory"

Order* OrderFactory::createOrder(const std::string& orderType) {
    if (orderType == "Pizza") {
        return new PizzaOrder;
    } else if (orderType == "Pasta") {
        return new PastaOrder;
    } else {
        std::cerr << "Invalid order type: " << orderType << std::endl;
        return nullptr;
    }
}
