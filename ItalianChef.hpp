#ifndef ITALIANCHEF_HPP
#define ITALIANCHEF_HPP
#include <vector>
#include <string>
//handler - abstract class that will be implemented by concrete handler - also holds the successor to the handler

class ItalianChef{

public:
    ItalianChef* nextChef;
    ItalianChef() : nextChef(nullptr){}

    void setNextChef(ItalianChef* chef);

    virtual void handleOrder(std::vector<std::string>& order); 
};

#endif 