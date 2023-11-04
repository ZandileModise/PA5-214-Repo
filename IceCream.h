#ifndef __ICE_CREAM_H_3C5ZW00WINJY__
#define __ICE_CREAM_H_3C5ZW00WINJY__
#include <iostream>
#include "Dessert.h"
///////////////////////////////////////////////////////////
/// @brief IceCream
///
class IceCream : public Dessert
{
    public:
        std::string getName();
        float getPrice();

    private:
        std::string name = "Ice Cream";
        float price = 55.0;
};

#endif  // __ICE_CREAM_H_3C5ZW00WINJY__
