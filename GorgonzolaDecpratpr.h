#pragma once
#include "ToppingDecorator.h"
using namespace std;

class GorgonzolaDecorator : public ToppingDecorator {
public:
  GorgonzolaDecorator(Pizza *p) {
    this->wrapee = p;
    this->name = "Gorgonzola";
    this->price = 15;
  }

  float getPrice() override { return this->price + wrapee->getPrice(); }
};