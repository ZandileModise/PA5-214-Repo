#ifndef GARNISH_H
#define GARNISH_H

#include <string>

/**
 * @class Garnish
 * @brief A class representing a garnish used in a dish.
 *
 * This class provides information about a garnish, including its price and name.
 */
class Garnish {
public:
    /**
     * @brief Constructor for Garnish class.
     *
     * Initializes a Garnish object with the given price and name.
     *
     * @param price The price of the garnish.
     * @param name  The name of the garnish.
     */
    Garnish(float price, const std::string& name);

    /**
     * @brief Get the price of the garnish.
     *
     * @return The price of the garnish.
     */
    float getPrice() const;
    
private:
    float price;         ///< The price of the garnish.
    std::string name;    ///< The name of the garnish.
};

#endif // GARNISH_H
