#include "Avocado.h"

/**
 * @brief Constructor for Avocado.
 * @details Sets the price and name for Avocado topping.
 */
Avocado::Avocado(Pizza* p) : Toppings(20.0, "Avocado", p) {}
