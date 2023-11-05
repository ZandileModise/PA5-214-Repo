#include <iostream>
#include <string>
#include "SaladBaseChef.hpp"

SaladBaseChef::SaladBaseChef(const std::string& topping) : Type(topping) {}

void SaladBaseChef::handleOrder(std::vector<std::string>& order){
    if(!order.empty() && order.front() == "Pizza Dough"){// checking if vector is empty and the first data item in our vector
        
        order.push_back("Salad Base Chef adding " + Type + " to the salad");

        order.erase(order.begin());// deleting the first thing in the vector so other vector items can move up

        // order.push_back("Pizza"); // or we can make a vector for the plate of type ingredients 
    }

    ItalianChef::handleOrder(order);
}