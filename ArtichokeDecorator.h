#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing an ArtichokeDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class ArtichokeDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs an ArtichokeDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  ArtichokeDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Artichoke";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Artichoke topping.
   *
   * @return The total price of the pizza including the Artichoke topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
