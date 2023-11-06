#pragma once
#include "Pizza.h"
#include <string>

class ProteinDecorator : public Pizza {
public:
  float price;
  Pizza *wrapee;
  std::string name;
};