#ifndef OVENCHEF_HPP
#define OVENCHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class OvenChef : public ItalianChef{
private:
    std::string doughType;

public:

    OvenChef(const std::string& type);
    void handleOrder(std::vector<std::string>& order);


};



#endif