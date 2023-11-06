#ifndef NOSAUCE_H
#define NOSAUCE_H

#include "PizzaSauce.h"

/**
 * @class NoSauce
 * @brief A class representing No Sauce.
 *
 * This class is a derived class from the Sauce base class and represents the absence
 * of any sauce in a dish.
 */
class NoSauce : public PizzaSauce {
public:
    /**
     * @brief Constructor for NoSauce class.
     *
     * Initializes a dish with no sauce.
     */
    NoSauce(Pizza* p);
};

#endif // NOSAUCE_H
