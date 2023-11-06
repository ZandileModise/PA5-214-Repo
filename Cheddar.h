#ifndef CHEDDAR_H
#define CHEDDAR_H
#include "Toppings.h"

/**
 * @class Cheddar
 * @brief A class representing Cheddar as a pizza topping.
 * 
 * This class inherits from the Toppings class and provides specific details about Cheddar topping.
 */
class Cheddar : public Toppings {
public:
    /**
     * @brief Constructor for Cheddar.
     * @details Sets the price and name for Cheddar topping.
     */
    Cheddar();
};

#endif
