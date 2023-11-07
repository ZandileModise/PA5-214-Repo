#pragma once
#include "PizzaBase.h"

/**
 * @brief A class representing a ThickCrust pizza.
 *
 * This class inherits from the PizzaBase class.
 */
class ThickCrust : public PizzaBase {
public:
  /**
   * @brief Constructs a ThickCrust pizza object.
   *
   * Initializes the price and name of the pizza.
   */
  ThickCrust() {
    this->price = 35;
    this->name = "ThickCrust";
  }

  /**
   * @brief Gets the price of the ThickCrust pizza.
   *
   * @return The price of the ThickCrust pizza.
   */
  float getPrice() override { return this->price; }
};
