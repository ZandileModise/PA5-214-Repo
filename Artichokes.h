#ifndef ARTICHOKES_H
#define ARTICHOKES_H
#include "PizzaToppings.h"

/**
 * @class Artichokes
 * @brief A class representing Artichokes as a pizza topping.
 * 
 * This class inherits from the Toppings class and provides specific details about Artichokes.
 */
class Artichokes : public PizzaToppings {
public:
    /**
     * @brief Constructor for Artichokes.
     * @details Sets the price and name for Artichokes topping.
     */
    Artichokes(Pizza* p);
};

#endif
