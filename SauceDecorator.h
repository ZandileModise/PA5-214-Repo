#pragma once
#include "Pizza.h"
#include <string>

/**
 * @brief A class representing a SauceDecorator for pizza.
 *
 * This class is not implementing any virtual functions from the Pizza base
 * class.
 */
class SauceDecorator : public Pizza {
public:
  float price;      /**< The price of the sauce decorator. */
  Pizza *wrapee;    /**< The base pizza being decorated. */
  std::string name; /**< The name of the sauce decorator. */
};
