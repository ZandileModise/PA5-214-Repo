#ifndef __WHITE_WINE_H_BN9F5GN99KMR__
#define __WHITE_WINE_H_BN9F5GN99KMR__
#include "Drink.h"
///////////////////////////////////////////////////////////
/// @brief WhiteWine
///
class WhiteWine : public Drink
{
    public:
        string getName();
        float getPrice();
    private:
        float price = 125.0;
        string name = "White Wine";
};

#endif  // __WHITE_WINE_H_BN9F5GN99KMR__
