#include "PizzaSauce.h"

/**
 * @brief Constructor for Sauce class.
 *
 * Initializes a Sauce object with the given price and name.
 *
 * @param price The price of the sauce.
 * @param name  The name of the sauce.
 */
PizzaSauce::PizzaSauce(float price, const std::string& name, Pizza* p) : price(price), name(name), wrapee(p) {}

/**
 * @brief Get the price of the sauce.
 *
 * @return The price of the sauce.
 */
float Sauce::getPrice() const {
    return price + wrapee->getPrice();
}
