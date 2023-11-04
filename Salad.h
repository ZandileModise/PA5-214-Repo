#ifndef __SALAD_H_IFOAA2LHXIFJ__
#define __SALAD_H_IFOAA2LHXIFJ__
#include "SaladIngredient.h"
#include <iostream>
#include <vector>
///////////////////////////////////////////////////////////
/// @brief Salad
///
class Salad
{
    public:
        void addIngredient(SaladIngredient* ingredient);
        void addProtein(Protein* protein);
        string getPrice();
    private:
        std::vector<SaladIngredient*> ingredients;
        std::vector<Protein*> proteins;
};

#endif  // __SALAD_H_IFOAA2LHXIFJ__

