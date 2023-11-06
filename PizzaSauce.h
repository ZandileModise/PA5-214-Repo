#ifndef PIZZASAUCE_H
#define PIZZASAUCE_H

#include <string>
#include "Pizza.h"

/**
 * @class PizzaSauce
 * @brief A class representing a sauce used in a dish.
 *
 * This class provides information about a sauce, including its price and name.
 */
class PizzaSauce {
public:
    /**
     * @brief Constructor for Sauce class.
     *
     * Initializes a PizzaSauce object with the given price and name.
     *
     * @param price The price of the PizzaSauce.
     * @param name  The name of the PizzaSauce.
     */
    PizzaSauce(float price, const std::string& name, Pizza* p);

    /**
     * @brief Get the price of the PizzaSauce.
     *
     * @return The price of the PizzaSauce.
     */
    float getPrice() const;
    
private:
    float price;         ///< The price of the PizzaSauce.
    std::string name;    ///< The name of the PizzaSauce.
    Pizza* wrapee;
};

#endif // SAUCE_H
