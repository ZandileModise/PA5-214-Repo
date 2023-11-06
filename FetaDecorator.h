#pragma once
#include "ToppingDecorator.h"
using namespace std;

class FetaDecorator : public ToppingDecorator {
public:
  FetaDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Feta";
    this->price = 10;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};