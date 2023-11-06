#pragma once
#include "ToppingDecorator.h"
using namespace std;

class PepperoniDecorator : public ToppingDecorator {
public:
  PepperoniDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Pepperoni";
    this->price = 20;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};