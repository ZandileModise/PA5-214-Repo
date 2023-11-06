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

class DoughChef : public PizzaChefHandler {
public:
  void process(std::vector<std::string> OrderVector, Pizza *pizza) {
    Pizza *p = pizza;
    cout << "Rolling the dough" << endl;
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
  DoughChef(ToppingsChef *next) { this->successor = next; };
};