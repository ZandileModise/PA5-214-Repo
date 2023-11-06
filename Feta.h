#ifndef FETA_H
#define FETA_H
#include "PizzaToppings.h"

/**
 * @class Feta
 * @brief A class representing Feta as a pizza topping.
 * 
 * This class inherits from the Toppings class and provides specific details about Feta topping.
 */
class Feta : public PizzaToppings {
public:
    /**
     * @brief Constructor for Feta.
     * @details Sets the price and name for Feta topping.
     */
    Feta(Pizza * p);
};

#endif
