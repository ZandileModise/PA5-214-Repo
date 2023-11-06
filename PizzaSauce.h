#ifndef SAUCE_H
#define SAUCE_H

#include <string>

/**
 * @class Sauce
 * @brief A class representing a sauce used in a dish.
 *
 * This class provides information about a sauce, including its price and name.
 */
class PizzaSauce {
public:
    /**
     * @brief Constructor for Sauce class.
     *
     * Initializes a Sauce object with the given price and name.
     *
     * @param price The price of the sauce.
     * @param name  The name of the sauce.
     */
    PizzaSauce(float price, const std::string& name, Pizza* p);

    /**
     * @brief Get the price of the sauce.
     *
     * @return The price of the sauce.
     */
    float getPrice() const;
    
private:
    float price;         ///< The price of the sauce.
    std::string name;    ///< The name of the sauce.
    Pizza* wrapee;
};

#endif // SAUCE_H
