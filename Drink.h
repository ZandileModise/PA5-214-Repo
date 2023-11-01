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
        string getName() const;
        float getPrice() const;

    private:
        float price;
        string name;
};

#endif  // __DRINK_H_2IC7HO72F1GY__

string Drink::getName() const {
    return name;
}

float Drink::getPrice() const {
    return price;
}
