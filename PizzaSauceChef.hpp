#ifndef PIZZASAUCECHEF_HPP
#define PIZZASAUCECHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class PizzaSauceChef : public ItalianChef{
private:
    std::string sauce;

public:

    PizzaSauceChef(const std::string& sauce);
    void handleOrder(std::vector<std::string>& order);


};



#endif