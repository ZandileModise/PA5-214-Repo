#ifndef BOLOGNESESAUCE_H
#define BOLOGNESESAUCE_H
#include "PastaSauce.h"

/**
 * @class BologneseSauce
 * @brief A class representing Bolognese Sauce.
 * 
 * This class inherits from the Sauce class and provides specific details about Bolognese Sauce.
 */
class BologneseSauce : public PastaSauce {
public:
    /**
     * @brief Constructor for Bolognese Sauce.
     * @details Sets the price and name for Bolognese Sauce.
     */
    BologneseSauce(Pasta* p);
};

#endif
