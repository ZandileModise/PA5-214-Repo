#pragma once
#include "ToppingDecorator.h"
using namespace std;

class ChickenDecorator : public ToppingDecorator {
public:
  ChickenDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Chicken";
    this->price = 20;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};