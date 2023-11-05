#include "Sauce.h"

Sauce::Sauce(float price, const std::string& name) : price(price), name(name) {}

float Sauce::getPrice() const {
    return price;
}