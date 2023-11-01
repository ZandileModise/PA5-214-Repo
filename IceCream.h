#ifndef __ICE_CREAM_H_3C5ZW00WINJY__
#define __ICE_CREAM_H_3C5ZW00WINJY__
#include "Dessert.h"
///////////////////////////////////////////////////////////
/// @brief IceCream
///
class IceCream : public Dessert
{
    public:
        string getName();
        float getPrice();

    private:
        string name = "Ice Cream";
        float price = 55.0;
};

#endif  // __ICE_CREAM_H_3C5ZW00WINJY__
