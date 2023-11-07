#pragma once
#include "HeadChef.h"
#include "Pizza.h"
#include "PizzaChefHandler.h"
#include <iostream>
#include <string>
#include <vector>

/**
 * @brief A class representing a chef responsible for cooking pizzas in the
 * oven.
 *
 * This class inherits from the PizzaChefHandler.
 */
class OvenChef : public PizzaChefHandler {
public:
  /**
   * @brief Processes the cooking of the pizza.
   *
   * @param OrderVector A vector containing order information.
   * @param pizza The base Pizza object.
   */
  void process(std::vector<std::string> OrderVector, Pizza *pizza) {
    // cooking pizza
    std::cout << "cooking the pizza" << std::endl;
    successor->process(OrderVector, pizza);
  }

  /**
   * @brief Constructs an OvenChef object.
   *
   * @param next A pointer to the next chef in the chain of responsibility.
   */
  OvenChef(HeadChef *next) { this->successor = next; };
};
