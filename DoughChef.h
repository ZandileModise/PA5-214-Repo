#pragma once
#include "DeepDish.h"
#include "Pizza.h"
#include "PizzaChefHandler.h"
#include "ThickCrust.h"
#include "ThinCrust.h"
#include "ToppingsChef.h"
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief A class representing a chef handling dough preparation for pizzas.
 *
 * This class is part of a chain of responsibility and inherits from
 * PizzaChefHandler.
 */
class DoughChef : public PizzaChefHandler {
public:
  /**
   * @brief Processes the dough preparation based on the order information.
   *
   * @param OrderVector A vector containing order information.
   * @param pizza The base Pizza object.
   */
  void process(std::vector<std::string> OrderVector, Pizza *pizza) {
    Pizza *p = pizza;
    std::cout << "Rolling the dough" << std::endl;

    if (OrderVector[0] == "ThickCrust") {
      p = new ThickCrust();
    }
    if (OrderVector[0] == "ThinCrust") {
      p = new ThinCrust();
    }
    if (OrderVector[0] == "DeepDish") {
      p = new DeepDish();
    }

    successor->process(OrderVector, p);
  };

  /**
   * @brief Constructs a DoughChef object.
   *
   * @param next A pointer to the next chef in the chain of responsibility.
   */
  DoughChef(ToppingsChef *next) { this->successor = next; };
};
