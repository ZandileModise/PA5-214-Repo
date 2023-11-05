#include <iostream>
#include <string>
#include "PizzaToppingChef.hpp"

PizzaToppingChef::PizzaToppingChef(const std::string& topping) : Topping(topping) {}

void PizzaToppingChef::handleOrder(std::vector<std::string>& order){
    if(!order.empty() && order.front() == "Pizza Toppings"){// checking if vector is empty and the first data item in our vector
        
        order.push_back("Pizza Toppings Chef adding " + Topping + " to the pizza");

        order.erase(order.begin());// deleting the first thing in the vector so other vector items can move up

        // order.push_back("Pizza"); // or we can make a vector for the plate of type ingredients 
    }

    ItalianChef::handleOrder(order);
}