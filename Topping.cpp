#include "Toppings.h"

/**
 * @brief Constructor for Toppings class.
 *
 * Initializes a Toppings object with the given price and name.
 *
 * @param price The price of the topping.
 * @param name  The name of the topping.
 */
Toppings::Toppings(float price, const std::string& name) : price(price), name(name) {}

/**
 * @brief Get the price of the topping.
 *
 * @return The price of the topping.
 */
float Toppings::getPrice() const {
    return price;
}

/**
 * @brief Get the name of the topping.
 *
 * @return The name of the topping.
 */
std::string Toppings::getName() {
    return this->name;
}
