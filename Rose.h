#ifndef __ROSE_H_0QWKSTHADGW6__
#define __ROSE_H_0QWKSTHADGW6__
#include "Drink.h"
///////////////////////////////////////////////////////////
/// @brief Rose
///
class Rose : public Drink
{
    public:
        string getName();
        float getPrice();
    private:
        float price = 135.0;
        string name = "Rose";
};

#endif  // __ROSE_H_0QWKSTHADGW6__
