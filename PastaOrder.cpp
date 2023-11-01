//
// Created by 77089 on 2023/10/31.
//

#include <iostream>
#include "PastaOrder.h"

void PastaOrder::prepare() {
    std::cout << "Preparing Pasta" << std::endl;
}

void PastaOrder::deliver() {
    std::cout << "Delivering Pasta" << std::endl;
}


std::string PastaOrder::getOrderType() const {
    return "Pasta";
}

float PastaOrder::getPrice() const {
    return price * getQuantity();
}

Order *PastaOrder::clone() {
    return new PastaOrder(*this);
}


