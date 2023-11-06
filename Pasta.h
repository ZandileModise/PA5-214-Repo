#pragma once

/**
 * @class Pasta
 * @brief An abstract class representing a Pasta.
 *
 * This class defines a virtual function for getting the price of a Pasta.
 */
class Pasta {
public:
    /**
     * @brief Virtual function to get the price of the Pasta.
     *
     * This function should be implemented by derived classes to calculate
     * the price of the specific Pasta type.
     *
     * @return The price of the Pasta.
     */
    virtual float getPrice() = 0;
};
