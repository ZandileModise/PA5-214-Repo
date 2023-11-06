//
// Created by 77089 on 2023/10/31.
//

#include "Order.h"

Order::Order() : quantity(1), price(0.0) {}

void Order::incrementQuantity() { quantity++; }

int Order::getQuantity() const { return quantity; }
