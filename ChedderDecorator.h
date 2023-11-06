#pragma once
#include "ToppingDecorator.h"
using namespace std;

class CheddarDecorator : public ToppingDecorator {
public:
  CheddarDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Cheddar";
    this->price = 10;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};