#pragma once
#include "ToppingDecorator.h"
using namespace std;

class MushroomDecorator : public ToppingDecorator {
public:
  MushroomDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Mushroom";
    this->price = 15;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};