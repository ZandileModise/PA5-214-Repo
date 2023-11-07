#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a CheddarDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class CheddarDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a CheddarDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  CheddarDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Cheddar";
    this->price = 10;
  }

  /**
   * @brief Gets the price of the pizza with the added Cheddar topping.
   *
   * @return The total price of the pizza including the Cheddar topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
