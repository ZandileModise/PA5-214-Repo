#ifndef __CHEESE_CAKE_H_V0GGFXWYNHG9__
#define __CHEESE_CAKE_H_V0GGFXWYNHG9__
#include "Dessert.h"
///////////////////////////////////////////////////////////
/// @brief CheeseCake
///
class CheeseCake
{
    public:
        std::string getName();
        float getPrice();

    private:
        float price = 60.0;
        std::string name = "Cheese Cake";
};

#endif  // __CHEESE_CAKE_H_V0GGFXWYNHG9__
