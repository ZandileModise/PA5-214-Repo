#ifndef THINCRUST_H
#define THINCRUST_H

#include "PizzaBase.h"

/**
 * @class ThinCrust
 * @brief A class representing a thin crust pizza base.
 *
 * This class is a derived class from the PizzaBase and provides specific information
 * about a thin crust pizza base, including its price and name.
 */
class ThinCrust : public PizzaBase {
public:
    /**
     * @brief Constructor for ThinCrust class.
     *
     * Initializes a thin crust pizza base with the appropriate data.
     */
    ThinCrust();
};

#endif // THINCRUST_H
