#ifndef CHEESECHEF_HPP
#define CHEESECHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class CheeseChef : public ItalianChef{
private:
    std::string doughType;

public:

    CheeseChef(const std::string& type);
    void handleOrder(std::vector<std::string>& order);


};



#endif