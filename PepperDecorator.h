#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a PepperDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class PepperDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a PepperDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  PepperDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Pepper";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Pepper topping.
   *
   * @return The total price of the pizza including the Pepper topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
