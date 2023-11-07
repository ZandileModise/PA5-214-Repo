//
// Created by 77089 on 2023/10/31.
//

#include <iostream>
#include "OrderFactory.h"
#include "PizzaOrder.h"
#include "PastaOrder.h"
#include "memory"
#include "SaladOrder.h"
#include "DesertOrder.h"
#include "DrinkOrder.h"

Order* OrderFactory::createOrder(const std::string& orderType) {
    if (orderType == "Pizza") {
        return new PizzaOrder;
    } else if (orderType == "Pasta") {
        return new PastaOrder;
    }
     else if (orderType == "Salad") {
        return new SaladOrder;
    }
     else if (orderType == "Desert") {
        return new DesertOrder;
    }
     else if (orderType == "Drink") {
        return new DrinkOrder;
    }
    else {
        std::cerr << "Invalid order type: " << orderType << std::endl;
        return nullptr;
    }
}
