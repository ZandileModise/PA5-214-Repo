#pragma once
#include "ToppingDecorator.h"
using namespace std;

class TofuDecorator : public ToppingDecorator {
public:
  TofuDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Tofu";
    this->price = 20;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};