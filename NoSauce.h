#ifndef NOSAUCE_H
#define NOSAUCE_H

#include "Sauce.h"

/**
 * @class NoSauce
 * @brief A class representing No Sauce.
 *
 * This class is a derived class from the Sauce base class and represents the absence
 * of any sauce in a dish.
 */
class NoSauce : public Sauce {
public:
    /**
     * @brief Constructor for NoSauce class.
     *
     * Initializes a dish with no sauce.
     */
    NoSauce();
};

#endif // NOSAUCE_H
