#ifndef MOZZARELLA_H
#define MOZZARELLA_H

#include "Toppings.h"

/**
 * @class Mozzarella
 * @brief A class representing the Mozzarella topping.
 *
 * This class is a derived class from the Toppings base class and provides specific
 * information about the Mozzarella topping.
 */
class Mozzarella : public Toppings {
public:
    /**
     * @brief Constructor for Mozzarella class.
     *
     * Initializes the Mozzarella topping with the appropriate data.
     */
    Mozzarella();
};

#endif // MOZZARELLA_H
