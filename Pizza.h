#pragma once

/**
 * @brief Abstract base class representing a Pizza.
 */
class Pizza {
public:
  /**
   * @brief Virtual function to retrieve the price of the pizza.
   *
   * @return The price of the pizza.
   */
  virtual float getPrice() = 0;
};
