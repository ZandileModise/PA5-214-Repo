#ifndef PIZZABASE_H
#define PIZZABASE_H

#include <string>
#include "Pizza.h"

/**
 * @class PizzaBase
 * @brief A class representing the base of a pizza.
 *
 * This class is a derived class from the Pizza base class and provides specific
 * information about the base of a pizza, including its price and name.
 */
class PizzaBase : public Pizza {
public:
    /**
     * @brief Constructor for PizzaBase class.
     *
     * Initializes the pizza base with the given price and name.
     *
     * @param price The price of the pizza base.
     * @param name  The name of the pizza base.
     */
    PizzaBase(float price, const std::string& name);

    /**
     * @brief Get the price of the pizza base.
     *
     * @return The price of the pizza base.
     */
    float getPrice() const;
    
private:
    float price;         ///< The price of the pizza base.
    std::string name;    ///< The name of the pizza base.
};

#endif // PIZZABASE_H
