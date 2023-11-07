#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a ChickenDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class ChickenDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a ChickenDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  ChickenDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Chicken";
    this->price = 20;
  }

  /**
   * @brief Gets the price of the pizza with the added Chicken topping.
   *
   * @return The total price of the pizza including the Chicken topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
