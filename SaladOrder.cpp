//
// Created by 77089 on 2023/11/6.
//

#include <iostream>
#include "SaladOrder.h"

float SaladOrder::getPrice() const {
    return price * getQuantity();
}


void SaladOrder::prepare() {
    std::cout << "Preparing Salad" << std::endl;
}

void SaladOrder::deliver() {
    std::cout << "Delivering Salad" << std::endl;
}


std::string SaladOrder::getOrderType() const {
    return "Salad";
}

Order *SaladOrder::clone() {
    return new SaladOrder(*this);
}
