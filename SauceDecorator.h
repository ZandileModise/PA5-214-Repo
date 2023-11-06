#pragma once
#include "Pizza.h"
#include <string>

class SauceDecorator : public Pizza {
public:
  float price;
  Pizza *wrapee;
  std::string name;
};