#ifndef PESTOSAUCE_H
#define PESTOSAUCE_H

#include "PastaSauce.h"

/**
 * @class PestoSauce
 * @brief A class representing Pesto Sauce.
 *
 * This class is a derived class from the Sauce base class and provides specific
 * information about Pesto Sauce.
 */
class PestoSauce : public PastaSauce {
public:
    /**
     * @brief Constructor for PestoSauce class.
     *
     * Initializes the Pesto Sauce with the appropriate data.
     */
    PestoSauce(Pasta* p);
};

#endif // PESTOSAUCE_H
