#pragma once
#include "ToppingDecorator.h"
using namespace std;

class ChedderDecorator : public ToppingDecorator {
public:
  ChedderDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Chedder";
    this->price = 10;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};