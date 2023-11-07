#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a HamDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class HamDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a HamDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  HamDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Ham";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Ham topping.
   *
   * @return The total price of the pizza including the Ham topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
