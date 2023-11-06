#pragma once
#include "HeadChef.h"
#include "Pizza.h"
#include "PizzaChefHandler.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class OvenChef : public PizzaChefHandler {
public:
  void process(std::vector<std::string> OrderVector, Pizza *pizza) {
    // cooking pizza
    cout << "cooking the pizza" << endl;
    successor->process(OrderVector, pizza);
  }
  OvenChef(HeadChef *next) { this->successor = next; };
};