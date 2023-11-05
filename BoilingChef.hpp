#ifndef BOILINGCHEF_HPP
#define BOILINGCHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class BoilingChef : public ItalianChef{
private:
    std::string doughType;

public:

    BoilingChef(const std::string& type);
    void handleOrder(std::vector<std::string>& order);


};



#endif