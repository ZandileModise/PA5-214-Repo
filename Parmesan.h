#ifndef PARMESAN_H
#define PARMESAN_H

#include "PizzaToppings.h"

/**
 * @class Parmesan
 * @brief A class representing the Parmesan topping.
 *
 * This class is a derived class from the Toppings base class and provides specific
 * information about the Parmesan topping.
 */
class Parmesan : public PizzaToppings {
public:
    /**
     * @brief Constructor for Parmesan class.
     *
     * Initializes the Parmesan topping with the appropriate data.
     */
    Parmesan(Pizza* p);
};

#endif // PARMESAN_H
