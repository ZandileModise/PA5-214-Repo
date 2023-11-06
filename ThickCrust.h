#ifndef THICKCRUST_H
#define THICKCRUST_H

#include "PizzaBase.h"

/**
 * @class ThickCrust
 * @brief A class representing a thick crust pizza base.
 *
 * This class is a derived class from the PizzaBase and provides specific information
 * about a thick crust pizza base, including its price and name.
 */
class ThickCrust : public PizzaBase {
public:
    /**
     * @brief Constructor for ThickCrust class.
     *
     * Initializes a thick crust pizza base with the appropriate data.
     */
    ThickCrust();
};

#endif // THICKCRUST_H
