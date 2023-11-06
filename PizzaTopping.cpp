#include "PizzaToppings.h"

/**
 * @brief Constructor for Toppings class.
 *
 * Initializes a Toppings object with the given price and name.
 *
 * @param price The price of the topping.
 * @param name  The name of the topping.
 */
PizzaToppings::PizzaToppings(float price, const std::string& name, Pizza* p) : price(price), name(name), wrapee(p) {}

/**
 * @brief Get the price of the topping.
 *
 * @return The price of the topping.
 */
float PizzaToppings::getPrice() const {
    return price + wrapee->getPrice();
}

/**
 * @brief Get the name of the topping.
 *
 * @return The name of the topping.
 */
std::string PizzaToppings::getName() {
    return this->name;
}
