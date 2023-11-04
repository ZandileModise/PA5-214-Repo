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
        float getIngredientPrice();

    private:
        std::string name;
        float price;
};

#endif  // __SALAD_INGREDIENT_H_Z99VHBRUWIC3__

