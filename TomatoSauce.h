#ifndef TOMATOSAUCE_H
#define TOMATOSAUCE_H

#include "PizzaSauce.h"

/**
 * @class TomatoSauce
 * @brief A class representing Tomato Sauce.
 *
 * This class is a derived class from the Sauce base class and provides specific
 * information about Tomato Sauce.
 */
class TomatoSauce : public PizzaSauce {
public:
    /**
     * @brief Constructor for TomatoSauce class.
     *
     * Initializes the Tomato Sauce with the appropriate data.
     */
    TomatoSauce(Pizza* p);
};

#endif // TOMATOSAUCE_H
