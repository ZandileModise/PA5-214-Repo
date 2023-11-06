#ifndef GORGONZOLA_H
#define GORGONZOLA_H

#include "Toppings.h"

/**
 * @class Gorgonzola
 * @brief A class representing the Gorgonzola topping.
 *
 * This class is a derived class from the Toppings base class and provides specific
 * information about the Gorgonzola topping.
 */
class Gorgonzola : public Toppings {
public:
    /**
     * @brief Constructor for Gorgonzola class.
     *
     * Initializes the Gorgonzola topping with the appropriate data.
     */
    Gorgonzola();
};

#endif // GORGONZOLA_H