#ifndef __DRINK_H_CW7QIY4ILHDW__
#define __DRINK_H_CW7QIY4ILHDW__
#include <iostream>

using namespace std;
///////////////////////////////////////////////////////////
/// @brief Drink
///
class Drink
{
    public:
        virtual ~Drink();
        float getPrice();
        string getName();

    private:
        float price;
        string name;
};

#endif  // __DRINK_H_CW7QIY4ILHDW__

