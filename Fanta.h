#ifndef __FANTA_H_HW9EFM9O8VRW__
#define __FANTA_H_HW9EFM9O8VRW__
#include "Drink.h"
///////////////////////////////////////////////////////////
/// @brief Fanta
///
class Fanta : public Drink 
{
    public:
        string getName();
        float getPrice();
    private: 
        float price = 39.99;
        std::string name = "Fanta";	
};

#endif  // __FANTA_H_HW9EFM9O8VRW__
