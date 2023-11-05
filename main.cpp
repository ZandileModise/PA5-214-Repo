#include <iostream>
#include <vector>
#include <string>
#include "ItalianChef.hpp"
#include "PizzaDoughChef.hpp"
#include "PizzaToppingChef.hpp"
#include "PizzaSauceChef.hpp"
#include "PastaDoughChef.hpp"
#include "PastaToppingChef.hpp"
#include "PastaSauceChef.hpp"
#include "SaladBaseChef.hpp"
#include "OvenChef.hpp"
#include "BoilingChef.hpp"
#include "CheeseChef.hpp"
#include "SaladDressingChef.hpp"
#include "GarnishChef.hpp"

int main(){

    std::vector<std::string> order;
    // order.push_back("Pizza Dough");
    // order.push_back("Pizza Toppings");
    // order.push_back("Pizza sauce");

    // simulation where we get a customers order 
    // maybe we have an array where each index is associated with an ingriedent 
    

    ItalianChef* pastaDoughChef = new SaladBaseChef("lettuce");
    ItalianChef* pastaToppingChef = new PastaToppingChef("mushrooms");
    ItalianChef* sauceChef = new PastaSauceChef("Tomato");
    ItalianChef* ovenchef = new OvenChef("Baking");
    ItalianChef* boilingChef = new BoilingChef("Boil");
    ItalianChef* cheese = new CheeseChef("Cheddar");
    ItalianChef* dressing = new SaladDressingChef("Olive oil");
    ItalianChef* garnish = new GarnishChef("tomatoes and chicken");

    pastaDoughChef->setNextChef(pastaToppingChef);
    pastaToppingChef->setNextChef(sauceChef);
    
    sauceChef->setNextChef(ovenchef);
    ovenchef->setNextChef(boilingChef);
    boilingChef->setNextChef(cheese);
    cheese->setNextChef(dressing);
    dressing->setNextChef(garnish);

    
    
    order.push_back("Pizza Dough");
    order.push_back("Pasta Toppings");
    order.push_back("Pasta sauce");
    order.push_back("Pizza Dough");
    order.push_back("Boil");
    order.push_back("Cheddar cheese");
    order.push_back("dressing");
    order.push_back("garnish");

    
    

    pastaDoughChef->handleOrder(order);


    for(const std::string& item : order){
        std::cout << item <<std::endl;

    }


    return 0;
}