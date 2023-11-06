#include "PizzaBase.h"

/**
 * @brief Constructor for PizzaBase class.
 *
 * Initializes the pizza base with the given price and name.
 *
 * @param price The price of the pizza base.
 * @param name  The name of the pizza base.
 */
PizzaBase::PizzaBase(float price, const std::string& name) : price(price), name(name) {}

/**
 * @brief Get the price of the pizza base.
 *
 * @return The price of the pizza base.
 */
float PizzaBase::getPrice() const {
    return price;
}
