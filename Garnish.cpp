#include "Garnish.h"

/**
 * @brief Constructor for Garnish class.
 *
 * Initializes a Garnish object with the given price and name.
 *
 * @param price The price of the garnish.
 * @param name  The name of the garnish.
 */
Garnish::Garnish(float price, const std::string& name) : price(price), name(name) {}

/**
 * @brief Get the price of the garnish.
 *
 * @return The price of the garnish.
 */
float Garnish::getPrice() const {
    return price;
}
