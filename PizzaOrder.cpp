#include <iostream>
#include "PizzaOrder.h"

void PizzaOrder::prepare() {
    std::cout << "Preparing Pizza Order" << std::endl;
}

void PizzaOrder::deliver() {
    std::cout << "Delivering Pizza Order" << std::endl;
}


std::string PizzaOrder::getOrderType() const {
    return "Pizza";
}

float PizzaOrder::getPrice() const {
    return price * getQuantity();
}

Order *PizzaOrder::clone() {
    return new PizzaOrder(*this);
}

