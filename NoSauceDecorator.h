#pragma once
#include "SauceDecorator.h"

/**
 * @brief A class representing a NoSauceDecorator.
 *
 * This class inherits from the SauceDecorator class.
 */
class NoSauceDecorator : public SauceDecorator {
public:
  /**
   * @brief Gets the price of the pizza without any sauce.
   *
   * @return The total price of the pizza without any sauce.
   */
  float getPrice() override { return this->price + wrapee->getPrice(); };

  /**
   * @brief Constructs a NoSauceDecorator object.
   *
   * @param p A pointer to the base Pizza object.
   */
  NoSauceDecorator(Pizza *p) {
    this->wrapee = p;
    this->price = 0;
    this->name = "NoSauce";
  }
};
