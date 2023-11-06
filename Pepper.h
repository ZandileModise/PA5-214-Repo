#ifndef PEPPER_H
#define PEPPER_H

#include "PizzaToppings.h"

/**
 * @class Pepper
 * @brief A class representing the Pepper topping.
 *
 * This class is a derived class from the Toppings base class and provides specific
 * information about the Pepper topping.
 */
class Pepper : public PizzaToppings {
public:
    /**
     * @brief Constructor for Pepper class.
     *
     * Initializes the Pepper topping with the appropriate data.
     */
    Pepper(Pizza* p);
};

#endif // PEPPER_H
