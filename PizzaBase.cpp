#include "PizzaBase.h"

PizzaBase::PizzaBase(float price, const std::string& name) : price(price), name(name) {}

float PizzaBase::getPrice() const {
    return price;
}
