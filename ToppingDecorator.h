#pragma once
#include "Pizza.h"
#include <string>

/**
 * @brief A class representing a ToppingDecorator for pizza.
 *
 * This class is not implementing any virtual functions from the Pizza base
 * class.
 */
class ToppingDecorator : public Pizza {
public:
  float price;      /**< The price of the topping decorator. */
  Pizza *wrapee;    /**< The base pizza being decorated. */
  std::string name; /**< The name of the topping decorator. */
};
