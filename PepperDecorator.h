#pragma once
#include "ToppingDecorator.h"
using namespace std;

class PepperDecorator : public ToppingDecorator {
public:
  PepperDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Pepper";
    this->price = 15;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};