#ifndef CARBONARASAUCE_H
#define CARBONARASAUCE_H
#include "PastaSauce.h"

/**
 * @class CarbonaraSauce
 * @brief A class representing Carbonara Sauce.
 * 
 * This class inherits from the Sauce class and provides specific details about Carbonara Sauce.
 */
class CarbonaraSauce : public PastaSauce {
public:
    /**
     * @brief Constructor for Carbonara Sauce.
     * @details Sets the price and name for Carbonara Sauce.
     */
    CarbonaraSauce(Pasta* p);
};

#endif
