#ifndef PASTASAUCE_H
#define PASTASAUCE_H

#include <string>
#include "Pasta.h"

/**
 * @class PastaSauce
 * @brief A class representing a sauce used in a dish.
 *
 * This class provides information about a sauce, including its price and name.
 */
class PastaSauce {
public:
    /**
     * @brief Constructor for PastaSauce class.
     *
     * Initializes a PastaSauce object with the given price and name.
     *
     * @param price The price of the PastaSauce.
     * @param name  The name of the PastaSauce.
     */
    PastaSauce(float price, const std::string& name, Pasta* p);

    /**
     * @brief Get the price of the sauce.
     *
     * @return The price of the sauce.
     */
    float getPrice() const;
    
private:
    float price;         ///< The price of the sauce.
    std::string name;    ///< The name of the sauce.
    Pasta* wrapee;
};

#endif // SAUCE_H
