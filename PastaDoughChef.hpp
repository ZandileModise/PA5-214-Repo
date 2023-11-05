#ifndef PASTADOUGHCHEF_HPP
#define PASTADOUGHCHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class PastaDoughChef : public ItalianChef{
private:
    std::string doughType;

public:

    PastaDoughChef(const std::string& type);
    void handleOrder(std::vector<std::string>& order);


};



#endif