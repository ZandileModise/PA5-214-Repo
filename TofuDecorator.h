#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a TofuDecorator for pizza.
 *
 * This class inherits from the ToppingDecorator class.
 */
class TofuDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a TofuDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  TofuDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Tofu";
    this->price = 20;
  }

  /**
   * @brief Gets the price of the pizza with the added Tofu topping.
   *
   * @return The total price of the pizza including the Tofu topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
