#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a GorgonzolaDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class GorgonzolaDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a GorgonzolaDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  GorgonzolaDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Gorgonzola";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Gorgonzola topping.
   *
   * @return The total price of the pizza including the Gorgonzola topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
