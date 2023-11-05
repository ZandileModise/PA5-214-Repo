#include <iostream>
#include <string>
#include "CheeseChef.hpp"

CheeseChef::CheeseChef(const std::string& type) : doughType(type){}

void CheeseChef::handleOrder(std::vector<std::string>& order){
    if(!order.empty() && order.front() == "Cheddar cheese"){// checking if vector is empty and the first data item in our vector
       
        order.push_back("Chef is adding cheese to Pasta");

        order.erase(order.begin());// deleting the first thing in the vector so other vector items can move up

        // order.push_back("Pizza"); // or we can make a vector for the plate of type ingredients 
    }

    ItalianChef::handleOrder(order);
}