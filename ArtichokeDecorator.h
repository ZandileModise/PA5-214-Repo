#pragma once
#include "ToppingDecorator.h"
using namespace std;

class ArtichokeDecorator : public ToppingDecorator {
public:
  ArtichokeDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Artichoke";
    this->price = 15;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};