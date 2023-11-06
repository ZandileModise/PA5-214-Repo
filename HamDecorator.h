#pragma once
#include "ToppingDecorator.h"
using namespace std;

class HamDecorator : public ToppingDecorator {
public:
  HamDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Ham";
    this->price = 15;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};