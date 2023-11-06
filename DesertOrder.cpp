//
// Created by 77089 on 2023/11/6.
//

#include <iostream>
#include "DesertOrder.h"

float DesertOrder::getPrice() const {
    return price * getQuantity();
}


void DesertOrder::prepare() {
    std::cout << "Preparing Desert" << std::endl;
}

void DesertOrder::deliver() {
    std::cout << "Delivering Desert" << std::endl;
}


std::string DesertOrder::getOrderType() const {
    return "Desert";
}

Order *DesertOrder::clone() {
    return new DesertOrder(*this);
}