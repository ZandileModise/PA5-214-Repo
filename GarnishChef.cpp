#include <iostream>
#include <string>
#include "GarnishChef.hpp"

GarnishChef::GarnishChef(const std::string& topping) : Type(topping) {}

void GarnishChef::handleOrder(std::vector<std::string>& order){
    if(!order.empty() && order.front() == "garnish"){// checking if vector is empty and the first data item in our vector
        
        order.push_back("Salad Garnish Chef is adding " + Type + " to the salad");

        order.erase(order.begin());// deleting the first thing in the vector so other vector items can move up

        // order.push_back("Pizza"); // or we can make a vector for the plate of type ingredients 
    }

    ItalianChef::handleOrder(order);
}