#ifndef PASTASAUCECHEF_HPP
#define PASTASAUCECHEF_HPP
#include <string>

//concrete Handler

#include "ItalianChef.hpp"

class PastaSauceChef : public ItalianChef{
private:
    std::string sauce;

public:

    PastaSauceChef(const std::string& sauce);
    void handleOrder(std::vector<std::string>& order);


};



#endif