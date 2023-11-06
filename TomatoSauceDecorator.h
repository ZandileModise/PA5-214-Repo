#pragma once
#include "SauceDecorator.h"

class TomatoSauceDecorator : public SauceDecorator {
public:
  float getPrice() override { return this->price + wrapee->getPrice(); };
  TomatoSauceDecorator(Pizza *p) {
    this->wrapee = p;
    this->price = 10;
    this->name = "TomatoSauce";
  }
};