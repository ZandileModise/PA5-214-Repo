#pragma once
#include "Pasta.h"
#include "PastaChefHandler.h"
#include "PizzaChefHandler.h"
using namespace std;

class PastaBoiler : public PastaChefHandler {
public:
  void process(std::vector<std::string> OrderVector, Pasta *Pasta);
  PastaBoiler(PizzaChefHandler *next) { this->successor = next; }
};