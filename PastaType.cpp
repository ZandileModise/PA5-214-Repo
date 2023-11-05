#include "PastaType.h"

PastaType::PastaType(float price, const std::string& name) : price(price), name(name) {}

float PastaType::getPrice() const {
    return price;
}