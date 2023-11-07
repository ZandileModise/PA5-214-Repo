#pragma once
#include "Pizza.h"
#include "PizzaChefHandler.h"
#include <string>
#include <vector>

/**
 * @brief A class representing the head chef handling final pizza processing and
 * delivery.
 *
 * This class inherits from the PizzaChefHandler.
 */
class HeadChef : public PizzaChefHandler {
public:
  /**
   * @brief Processes the final stage of the pizza order.
   *
   * @param OrderVector A vector containing order information.
   * @param pizza The base Pizza object.
   */
  void process(std::vector<std::string> OrderVector, Pizza *pizza) override{

  };

  /**
   * @brief Delivers the prepared pizza to the table.
   *
   * @param p The Pizza object to be delivered.
   */
  void ReturnPizza(Pizza *p) {
    // deliver pizza to the table
  }

  /**
   * @brief Constructs a HeadChef object.
   */
  HeadChef();
};
