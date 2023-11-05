#ifndef PASTATOPPINGCHEF_HPP
#define PASTATOPPINGCHEF_HPP
#include <string>

//concrete Handler -> for pasta toppings 

#include "ItalianChef.hpp"

class PastaToppingChef : public ItalianChef{
private:
    std::string Topping;

public:

    PastaToppingChef(const std::string& Topping);
    void handleOrder(std::vector<std::string>& order);


};



#endif