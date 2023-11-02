#ifndef __DESSERT_H_AXDWJUUORMM7__
#define __DESSERT_H_AXDWJUUORMM7__
#include <iostream>
///////////////////////////////////////////////////////////
/// @brief Dessert
///
class Dessert
{
    public: 
        virtual ~Dessert();
        virtual float getPrice() = 0;
        virtual std::string getName() = 0;

    private:
        std::string name;
        float price;
};

#endif  // __DESSERT_H_AXDWJUUORMM7__



