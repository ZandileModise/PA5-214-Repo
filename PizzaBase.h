#pragma once
#include "Pizza.h"
#include <string>

/**
 * @brief Class representing the base properties of a Pizza.
 *
 * This class inherits from the abstract Pizza class.
 */
class PizzaBase : public Pizza {
public:
  float price;      /**< The price of the pizza. */
  std::string name; /**< The name of the pizza. */
};
