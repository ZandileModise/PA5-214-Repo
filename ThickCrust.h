#pragma once
#include "PizzaBase.h"

class ThickCrust : public PizzaBase {
public:
  ThickCrust() {
    this->price = 35;
    this->name = "ThickCrust";
  };
  float getPrice() override { return this->price; };
};