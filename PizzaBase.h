#pragma once
#include "Pizza.h"
#include <string>

class PizzaBase : public Pizza {
public:
  float price;
  std::string name;
};