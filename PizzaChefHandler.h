#pragma once
#include "Pizza.h"
#include <string>
#include <vector>

class PizzaChefHandler {
public:
  PizzaChefHandler *successor;
  virtual void process(std::vector<std::string> OrderVector, Pizza *pizza) = 0;
};