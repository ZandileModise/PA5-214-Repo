#pragma once
#include "SauceDecorator.h"

/**
 * @brief A class representing a TomatoSauceDecorator.
 *
 * This class inherits from the SauceDecorator class.
 */
class TomatoSauceDecorator : public SauceDecorator {
public:
  /**
   * @brief Gets the price of the pizza with the added Tomato Sauce.
   *
   * @return The total price of the pizza including the Tomato Sauce.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); };

  /**
   * @brief Constructs a TomatoSauceDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  TomatoSauceDecorator(Pizza *p) {
    this->wrapee = p;
    this->price = 10;
    this->name = "TomatoSauce";
  }
};
