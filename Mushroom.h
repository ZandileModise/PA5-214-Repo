#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "Toppings.h"

/**
 * @class Mushroom
 * @brief A class representing the Mushroom topping.
 *
 * This class is a derived class from the Toppings base class and provides specific
 * information about the Mushroom topping.
 */
class Mushroom : public Toppings {
public:
    /**
     * @brief Constructor for Mushroom class.
     *
     * Initializes the Mushroom topping with the appropriate data.
     */
    Mushroom();
};

#endif // MUSHROOM_H
