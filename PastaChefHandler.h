#pragma once
#include "Pasta.h"
#include <string>
#include <vector>

class PastaChefHandler {
public:
  PastaChefHandler *successor;
  virtual void process(std::vector<std::string> OrderVector, Pasta *Pasta) = 0;
};