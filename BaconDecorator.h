#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a BaconDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class BaconDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a BaconDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  BaconDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Bacon";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Bacon topping.
   *
   * @return The total price of the pizza including the Bacon topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
