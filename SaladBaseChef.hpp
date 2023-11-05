#ifndef SALADBASECHEF_HPP
#define SALADBASECHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class SaladBaseChef : public ItalianChef{
private:
    std::string Type;

public:

    SaladBaseChef(const std::string& Type);
    void handleOrder(std::vector<std::string>& order);


};



#endif