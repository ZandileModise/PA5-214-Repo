#ifndef __DRINK_H_2IC7HO72F1GY__
#define __DRINK_H_2IC7HO72F1GY__
#include <iostream>

using namespace std;
///////////////////////////////////////////////////////////
/// @brief Drink
///
class Drink
{
    public:
        virtual ~Drink(); // TODO: Is VIRTUAL needed?
        virtual string getName() = 0;
        virtual float getPrice() = 0;

    private:
        float price;
        string name;
};

#endif  // __DRINK_H_2IC7HO72F1GY__

