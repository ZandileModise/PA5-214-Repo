#pragma once
#include "Pizza.h"
#include <string>
#include <vector>

/**
 * @brief Abstract base class representing a handler for processing pizza
 * orders.
 */
class PizzaChefHandler {
public:
  PizzaChefHandler
      *successor; /**< A pointer to the next handler in the chain. */

  /**
   * @brief Process function to handle pizza orders.
   *
   * @param OrderVector A vector containing order information.
   * @param pizza The base Pizza object.
   */
  virtual void process(std::vector<std::string> OrderVector, Pizza *pizza) = 0;
};
