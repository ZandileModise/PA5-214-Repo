#pragma once

/**
 * @class Pizza
 * @brief An abstract class representing a pizza.
 *
 * This class defines a virtual function for getting the price of a pizza.
 */
class Pizza {
public:
    /**
     * @brief Virtual function to get the price of the pizza.
     *
     * This function should be implemented by derived classes to calculate
     * the price of the specific pizza type.
     *
     * @return The price of the pizza.
     */
    virtual float getPrice() = 0;
};
