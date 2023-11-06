#include "Cheddar.h"

/**
 * @brief Constructor for Cheddar.
 * @details Sets the price and name for Cheddar topping.
 */
Cheddar::Cheddar(Pizza* p) : Toppings(25.0, "Cheddar", p) {}
