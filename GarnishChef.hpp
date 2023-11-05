#ifndef GARNISHCHEF_HPP
#define GARNISHCHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class GarnishChef : public ItalianChef{
private:
    std::string Type;

public:

    GarnishChef(const std::string& Type);
    void handleOrder(std::vector<std::string>& order);


};



#endif