#ifndef __PIZZAPROTEIN_H_L0FF5A7QYM94__
#define __PIZZAPROTEIN_H_L0FF5A7QYM94__
#include <iostream>
#include "Pizza.h"

using namespace std;
///////////////////////////////////////////////////////////
/// @brief Protein
///
class PizzaProtein
{
    public:
        PizzaProtein(std::string name, float price);
        float getPrice();
        std::string getName();

    private:
        std::string name;
        float price;
        Pizza* wrapee;
};

#endif  // __PROTEIN_H_L0FF5A7QYM94__
