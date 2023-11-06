#pragma once
#include "Pizza.h"
#include "PizzaChefHandler.h"
#include <string>
#include <vector>

class HeadChef : public PizzaChefHandler {
public:
  void process(std::vector<std::string> OrderVector, Pizza *pizza){
      // deliverpizza
  };
  HeadChef();
};