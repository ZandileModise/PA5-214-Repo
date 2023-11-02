#ifndef __SALAD_INGREDIENT_H_Z99VHBRUWIC3__
#define __SALAD_INGREDIENT_H_Z99VHBRUWIC3__
#include <iostream>
#include <vector>
#include "Protein.h"
///////////////////////////////////////////////////////////
/// @brief SaladIngredient
///
class SaladIngredient
{
    public:
        SaladIngredient(std::string name, float price);
        virtual ~SaladIngredient();
        virtual float getPrice();
        virtual std::string getName();
        void addProtein(Protein* protein);
        float getIngredientPrice();

    private:
        std::string name;
        float price;
        std::vector<Protein*> proteins;
};

#endif  // __SALAD_INGREDIENT_H_Z99VHBRUWIC3__

