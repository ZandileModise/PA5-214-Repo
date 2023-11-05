#ifndef PIZZATOPPINGCHEF_HPP
#define PIZZATOPPINGCHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class PizzaToppingChef : public ItalianChef{
private:
    std::string Topping;

public:

    PizzaToppingChef(const std::string& Topping);
    void handleOrder(std::vector<std::string>& order);


};



#endif