#include <iostream>
#include <string>
#include "PizzaDoughChef.hpp"

PizzaDoughChef::PizzaDoughChef(const std::string& type) : doughType(type){}

void PizzaDoughChef::handleOrder(std::vector<std::string>& order){
    if(!order.empty() && order.front() == "Pizza Dough"){// checking if vector is empty and the first data item in our vector
       
        order.push_back("Pizza Dough Chef preparing a " + doughType + " dough");

        order.erase(order.begin());// deleting the first thing in the vector so other vector items can move up

        // order.push_back("Pizza"); // or we can make a vector for the plate of type ingredients 
    }

    ItalianChef::handleOrder(order);
}