#pragma once
#include "PizzaBase.h"

class ThinCrust : public PizzaBase {
public:
  ThinCrust() {
    this->price = 30;
    this->name = "ThinCrust";
  };
  float getPrice() override { return this->price; };
};