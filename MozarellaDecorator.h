#pragma once
#include "ToppingDecorator.h"
using namespace std;

class MozarellaDecorator : public ToppingDecorator {
public:
  MozarellaDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Mozarella";
    this->price = 10;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};