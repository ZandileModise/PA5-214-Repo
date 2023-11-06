#pragma once
#include "SauceDecorator.h"

class NoSauceDecorator : public SauceDecorator {
public:
  float getPrice() override { return this->price + wrapee->getPrice(); };
  NoSauceDecorator(Pizza *p) {
    this->wrapee = p;
    this->price = 0;
    this->name = "NoSauce";
  }
};