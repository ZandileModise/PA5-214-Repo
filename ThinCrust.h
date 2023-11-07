#pragma once
#include "PizzaBase.h"

/**
 * @brief A class representing a ThinCrust pizza.
 *
 * This class inherits from the PizzaBase class.
 */
class ThinCrust : public PizzaBase {
public:
  /**
   * @brief Constructs a ThinCrust pizza object.
   *
   * Initializes the price and name of the pizza.
   */
  ThinCrust() {
    this->price = 30;
    this->name = "ThinCrust";
  }

  /**
   * @brief Gets the price of the ThinCrust pizza.
   *
   * @return The price of the ThinCrust pizza.
   */
  float getPrice() override { return this->price; }
};
