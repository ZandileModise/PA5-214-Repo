#ifndef PIZZADOUGHCHEF_HPP
#define PIZZADOUGHCHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class PizzaDoughChef : public ItalianChef{
private:
    std::string doughType;

public:

    PizzaDoughChef(const std::string& type);
    void handleOrder(std::vector<std::string>& order);


};



#endif