#include "Garnish.h"

Garnish::Garnish(float price, const std::string& name) : price(price), name(name) {}

float Garnish::getPrice() const {
    return price;
}