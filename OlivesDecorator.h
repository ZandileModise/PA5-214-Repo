#pragma once
#include "ToppingDecorator.h"
using namespace std;

class OlivesDecorator : public ToppingDecorator {
public:
  OlivesDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Olives";
    this->price = 15;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};