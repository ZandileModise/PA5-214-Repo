#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a MozarellaDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class MozarellaDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a MozarellaDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  MozarellaDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Mozarella";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Mozarella topping.
   *
   * @return The total price of the pizza including the Mozarella topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
