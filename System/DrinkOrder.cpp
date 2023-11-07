//
// Created by 77089 on 2023/11/6.
//

#include <iostream>
#include "DrinkOrder.h"

float DrinkOrder::getPrice() const {
    return price * getQuantity();
}


void DrinkOrder::prepare() {
    std::cout << "Preparing Drink" << std::endl;
}

void DrinkOrder::deliver() {
    std::cout << "Delivering Drink" << std::endl;
}


std::string DrinkOrder::getOrderType() const {
    return "Drink";
}

Order *DrinkOrder::clone() {
    return new DrinkOrder(*this);
}