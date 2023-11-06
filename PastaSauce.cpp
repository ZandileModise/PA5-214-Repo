#include "PastaSauce.h"

/**
 * @brief Constructor for Sauce class.
 *
 * Initializes a PastaSauce object with the given price and name.
 *
 * @param price The price of the sauce.
 * @param name  The name of the sauce.
 */
PastaSauce::PastaSauce(float price, const std::string& name, Pasta* p) : price(price), name(name), wrapee(p) {}

/**
 * @brief Get the price of the sauce.
 *
 * @return The price of the sauce.
 */
float PastaSauce::getPrice() const {
    return price + wrapee->getPrice();
}
