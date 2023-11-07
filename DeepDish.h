#pragma once
#include "PizzaBase.h"

/**
 * @brief A class representing a DeepDish pizza.
 *
 * This class inherits from the PizzaBase class.
 */
class DeepDish : public PizzaBase {
public:
  /**
   * @brief Constructs a DeepDish pizza object.
   *
   * Initializes the price and name of the pizza.
   */
  DeepDish() {
    this->price = 50;
    this->name = "DeepDish";
  }

  /**
   * @brief Gets the price of the DeepDish pizza.
   *
   * @return The price of the DeepDish pizza.
   */
  float getPrice() override { return this->price; }
};
