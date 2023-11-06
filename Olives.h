#ifndef OLIVES_H
#define OLIVES_H

#include "PizzaToppings.h"

/**
 * @class Olives
 * @brief A class representing the Olives topping.
 *
 * This class is a derived class from the Toppings base class and provides specific
 * information about the Olives topping.
 */
class Olives : public PizzaToppings {
public:
    /**
     * @brief Constructor for Olives class.
     *
     * Initializes the Olives topping with the appropriate data.
     */
    Olives(Pizza* p);
};

#endif // OLIVES_H
