#include "Sauce.h"

/**
 * @brief Constructor for Sauce class.
 *
 * Initializes a Sauce object with the given price and name.
 *
 * @param price The price of the sauce.
 * @param name  The name of the sauce.
 */
Sauce::Sauce(float price, const std::string& name) : price(price), name(name) {}

/**
 * @brief Get the price of the sauce.
 *
 * @return The price of the sauce.
 */
float Sauce::getPrice() const {
    return price;
}
