#pragma once
#include "Pizza.h"
#include <string>

class ToppingDecorator : public Pizza {
public:
  float price;
  Pizza *wrapee;
  std::string name;
};