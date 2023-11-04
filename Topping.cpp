#include "Toppings.h"

Toppings::Toppings(float price, const std::string& name) : price(price), name(name) {}

float Toppings::getPrice() const {
    return price;
}

void Toppings::setPrice(float p){
    this->price = p;
}

void Toppings::setName(std::string n){
    this->name = n;
}

std::string Toppings::getName() {
    return this->name;
}



