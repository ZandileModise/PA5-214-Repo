#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a PepperoniDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class PepperoniDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a PepperoniDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  PepperoniDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Pepperoni";
    this->price = 20;
  }

  /**
   * @brief Gets the price of the pizza with the added Pepperoni topping.
   *
   * @return The total price of the pizza including the Pepperoni topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
