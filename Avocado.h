#ifndef AVOCADO_H
#define AVOCADO_H
#include "Toppings.h"

/**
 * @class Avocado
 * @brief A class representing Avocado as a pizza topping.
 * 
 * This class inherits from the Toppings class and provides specific details about Avocado topping.
 */
class Avocado : public Toppings {
public:
    /**
     * @brief Constructor for Avocado.
     * @details Sets the price and name for Avocado topping.
     */
    Avocado();
};

#endif
