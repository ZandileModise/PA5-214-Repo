#ifndef __BROWNIE_H_V91KADMOQAVO__
#define __BROWNIE_H_V91KADMOQAVO__
#include "Dessert.h"
///////////////////////////////////////////////////////////
/// @brief Brownie
///
class Brownie : public Dessert
{
    public:
        string getName();
        float getPrice();

    private:
        float price = 65.0;
        string name = "Brownie";
};

#endif  // __BROWNIE_H_V91KADMOQAVO__
