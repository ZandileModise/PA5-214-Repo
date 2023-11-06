#include "PastaType.h"

/**
 * @brief Constructor for PastaType class.
 *
 * Initializes a PastaType object with the given price and name.
 *
 * @param price The price of the pasta type.
 * @param name  The name of the pasta type.
 */
PastaType::PastaType(float price, const std::string& name) : price(price), name(name) {}

/**
 * @brief Get the price of the pasta type.
 *
 * @return The price of the pasta type.
 */
float PastaType::getPrice() const {
    return price;
}
