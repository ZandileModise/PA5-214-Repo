#pragma once
#include "ToppingDecorator.h"
using namespace std;

class AvocadoDecorator : public ToppingDecorator {
public:
  AvocadoDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Avocado";
    this->price = 15;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};