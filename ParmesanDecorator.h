#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a ParmesanDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class ParmesanDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a ParmesanDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  ParmesanDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Parmesan";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Parmesan topping.
   *
   * @return The total price of the pizza including the Parmesan topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
