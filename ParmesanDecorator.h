#pragma once
#include "ToppingDecorator.h"
using namespace std;

class ParmesanDecorator : public ToppingDecorator {
public:
  ParmesanDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Parmesan";
    this->price = 10;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};