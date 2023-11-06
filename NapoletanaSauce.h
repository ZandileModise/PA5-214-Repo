#ifndef NAPOLETANASAUCE_H
#define NAPOLETANASAUCE_H

#include "PastaSauce.h"

/**
 * @class NapoletanaSauce
 * @brief A class representing Napoletana Sauce.
 *
 * This class is a derived class from the Sauce base class and provides specific
 * information about Napoletana Sauce.
 */
class NapoletanaSauce : public PastaSauce {
public:
    /**
     * @brief Constructor for NapoletanaSauce class.
     *
     * Initializes the Napoletana Sauce with the appropriate data.
     */
    NapoletanaSauce(Pasta* p);
};

#endif // NAPOLETANASAUCE_H
