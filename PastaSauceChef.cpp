#include <iostream>
#include <string>
#include "PastaSauceChef.hpp"

PastaSauceChef::PastaSauceChef(const std::string& type) : sauce(type){}

void PastaSauceChef::handleOrder(std::vector<std::string>& order){
    if(!order.empty() && order.front() == "Pasta sauce"){// checking if vector is empty and the first data item in our vector
        
        order.push_back("Pasta Sauce Chef adding " + sauce + " sauce on the Pasta");

        order.erase(order.begin());// deleting the first thing in the vector so other vector items can move up

        // order.push_back("Pasta"); // or we can make a vector for the plate of type ingredients 
    }

    ItalianChef::handleOrder(order);
}