#ifndef SALADDRESSINGCHEF_HPP
#define SALADDRESSINGCHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class SaladDressingChef : public ItalianChef{
private:
    std::string Type;

public:

    SaladDressingChef(const std::string& Type);
    void handleOrder(std::vector<std::string>& order);


};



#endif