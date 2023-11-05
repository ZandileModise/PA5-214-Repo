#include <iostream>
#include <string>
#include "PizzaSauceChef.hpp"

PizzaSauceChef::PizzaSauceChef(const std::string& type) : sauce(type){}

void PizzaSauceChef::handleOrder(std::vector<std::string>& order){
    if(!order.empty() && order.front() == "Pizza sauce"){// checking if vector is empty and the first data item in our vector
        
        order.push_back("Pizza Sauce Chef adding " + sauce + " sauce on the pizza");

        order.erase(order.begin());// deleting the first thing in the vector so other vector items can move up

        // order.push_back("Pizza"); // or we can make a vector for the plate of type ingredients 
    }

    ItalianChef::handleOrder(order);
}