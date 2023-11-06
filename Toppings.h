#ifndef TOPPINGS_H
#define TOPPINGS_H

#include <string>

/**
 * @class Toppings
 * @brief A class representing a topping used in a dish.
 *
 * This class provides information about a topping, including its price and name.
 */
class Toppings {
public:
    /**
     * @brief Constructor for Toppings class.
     *
     * Initializes a Toppings object with the given price and name.
     *
     * @param price The price of the topping.
     * @param name  The name of the topping.
     */
    Toppings(float price, const std::string& name);

    /**
     * @brief Get the price of the topping.
     *
     * @return The price of the topping.
     */
    float getPrice() const;


    /**
     * @brief Get the name of the topping.
     *
     * @return The name of the topping.
     */
    std::string getName();

private:
    float price;         ///< The price of the topping.
    std::string name;    ///< The name of the topping.
};

#endif // TOPPINGS_H
