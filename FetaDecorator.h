#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a FetaDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class FetaDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a FetaDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  FetaDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Feta";
    this->price = 10;
  }

  /**
   * @brief Gets the price of the pizza with the added Feta topping.
   *
   * @return The total price of the pizza including the Feta topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
