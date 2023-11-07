#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing an AvocadoDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class AvocadoDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs an AvocadoDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  AvocadoDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Avocado";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Avocado topping.
   *
   * @return The total price of the pizza including the Avocado topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
