#pragma once
#include "PizzaBase.h"

class DeepDish : public PizzaBase {
public:
  DeepDish() {
    this->price = 50;
    this->name = "DeepDish";
  };
  float getPrice() override { return this->price; };
};