#pragma once
#include "ToppingDecorator.h"

/**
 * @brief A class representing a MushroomDecorator.
 *
 * This class inherits from the ToppingDecorator class.
 */
class MushroomDecorator : public ToppingDecorator {
public:
  /**
   * @brief Constructs a MushroomDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  MushroomDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Mushroom";
    this->price = 15;
  }

  /**
   * @brief Gets the price of the pizza with the added Mushroom topping.
   *
   * @return The total price of the pizza including the Mushroom topping.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); }
};
