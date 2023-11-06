#pragma once
#include "ArtichokeDecorator.h"
#include "AvocadoDecorator.h"
#include "BaconDecorator.h"
#include "ChedderDecorator.h"
#include "ChickenDecorator.h"
#include "FetaDecorator.h"
#include "GorgonzolaDecpratpr.h"
#include "HamDecorator.h"
#include "MozarellaDecorator.h"
#include "MushroomDecorator.h"
#include "OlivesDecorator.h"
#include "OvenChef.h"
#include "ParmesanDecorator.h"
#include "PepperDecorator.h"
#include "PepperoniDecorator.h"
#include "Pizza.h"
#include "PizzaChefHandler.h"
#include "TofuDecorator.h"
#include <iostream>
#include <string>
#include <vector>

class ToppingsChef : public PizzaChefHandler {
public:
  void process(std::vector<std::string> OrderVector, Pizza *pizza) {
    cout << "adding toppings" << endl;
    Pizza *p = pizza;
    for (int i = 1; i < OrderVector.size(); i++) {
      if (OrderVector[i] == "Feta") {
        p = new FetaDecorator(p);
      }
      if (OrderVector[i] == "Parmesan") {
        p = new ParmesanDecorator(p);
      }
      if (OrderVector[i] == "Cheddar") {
        p = new CheddarDecorator(p);
      }
      if (OrderVector[i] == "Mozarella") {
        p = new MozarellaDecorator(p);
      }
      if (OrderVector[i] == "Gorgonzola") {
        p = new GorgonzolaDecorator(p);
      }
      if (OrderVector[i] == "Mushroom") {
        p = new MushroomDecorator(p);
      }
      if (OrderVector[i] == "Pepper") {
        p = new PepperDecorator(p);
      }
      if (OrderVector[i] == "Avocado") {
        p = new AvocadoDecorator(p);
      }
      if (OrderVector[i] == "Olives") {
        p = new OlivesDecorator(p);
      }
      if (OrderVector[i] == "Artichoke") {
        p = new ArtichokeDecorator(p);
      }
      if (OrderVector[i] == "Tofu") {
        p = new TofuDecorator(p);
      }
      if (OrderVector[i] == "Bacon") {
        p = new BaconDecorator(p);
      }
      if (OrderVector[i] == "Chicken") {
        p = new ChickenDecorator(p);
      }
      if (OrderVector[i] == "Ham") {
        p = new HamDecorator(p);
      }
      if (OrderVector[i] == "Pepperoni") {
        p = new PepperoniDecorator(p);
      }
    }

    successor->process(OrderVector, p);
  };
  ToppingsChef(OvenChef *next) { this->successor = next; };
};