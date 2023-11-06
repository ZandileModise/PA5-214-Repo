#ifndef AVOCADO_H
#define AVOCADO_H
#include "PizzaToppings.h"

/**
 * @class Avocado
 * @brief A class representing Avocado as a pizza topping.
 * 
 * This class inherits from the Toppings class and provides specific details about Avocado topping.
 */
class Avocado : public PizzaToppings {
public:
    /**
     * @brief Constructor for Avocado.
     * @details Sets the price and name for Avocado topping.
     */
    Avocado(Pizza* p);
};

#endif
