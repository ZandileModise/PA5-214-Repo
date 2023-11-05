#include <iostream>
#include <string>
#include "PastaToppingChef.hpp"

PastaToppingChef::PastaToppingChef(const std::string& topping) : Topping(topping) {}

void PastaToppingChef::handleOrder(std::vector<std::string>& order){
    if(!order.empty() && order.front() == "Pasta Toppings"){// checking if vector is empty and the first data item in our vector
        
        order.push_back("Pasta Toppings Chef adding " + Topping + " to the Pasta");

        order.erase(order.begin());// deleting the first thing in the vector so other vector items can move up

        // order.push_back("Pasta"); // or we can make a vector for the plate of type ingredients 
    }

    ItalianChef::handleOrder(order);
}