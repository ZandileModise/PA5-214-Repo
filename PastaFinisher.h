#pragma once
#include "HeadChef.h"
#include "Pasta.h"
#include "PastaChefHandler.h"
using namespace std;

class PastaFinisher : public PastaChefHandler {
public:
  void process(std::vector<std::string> OrderVector, Pasta *Pasta);
  PastaFinisher();
};