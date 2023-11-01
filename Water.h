#ifndef __WATER_H_JNX59PG2OZCN__
#define __WATER_H_JNX59PG2OZCN__
#include "Drink.h"
///////////////////////////////////////////////////////////
/// @brief Water
///
class Water : public Drink
{
    public:
        string getName();
        float getPrice();
    private:
        string name = "Premium Water";
        float price = 19.99;
};

#endif  // __WATER_H_JNX59PG2OZCN__
