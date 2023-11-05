#include <iostream>
#include "ItalianChef.hpp"
// handler 

void ItalianChef::setNextChef(ItalianChef* chef){

    nextChef = chef;

}

void ItalianChef::handleOrder(std::vector<std::string>& order){
    if(nextChef){
        nextChef->handleOrder(order);
    }
    else{
        //call the waiter since that means the kitchen is done -> can use the mediator to communicate ?????
    }
}


