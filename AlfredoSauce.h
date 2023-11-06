#ifndef ALFREDOSAUCE_H
#define ALFREDOSAUCE_H
#include "Sauce.h"

/**
 * @class AlfredoSauce
 * @brief A class representing Alfredo Sauce.
 * 
 * This class inherits from Sauce and provides specific details about Alfredo Sauce.
 */

class AlfredoSauce : public Sauce {
public:

    /**
     * @brief Constructor for Alfredo Sauce.
     * @details Sets the price and name for Alfredo Sauce.
     */

    AlfredoSauce(Pizza* p);
};

#endif
