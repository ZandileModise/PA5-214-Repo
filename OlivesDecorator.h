#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing an OlivesDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class OlivesDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs an OlivesDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  OlivesDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Olives";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Olives topping.
   *
   * @return The total price of the pizza including the Olives topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
