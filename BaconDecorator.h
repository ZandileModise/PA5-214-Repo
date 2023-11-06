#pragma once
#include "ToppingDecorator.h"
using namespace std;

class BaconDecorator : public ToppingDecorator {
public:
  BaconDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Bacon";
    this->price = 15;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};