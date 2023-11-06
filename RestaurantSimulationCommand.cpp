//
// Created by 77089 on 2023/11/6.
//

#include <iostream>
#include "RestaurantSimulationCommand.h"
#include <unistd.h>
RestaurantSimulationCommand::RestaurantSimulationCommand(Restaurant *restaurant) {
    this->restaurant = restaurant;
}

void RestaurantSimulationCommand::execute() {
    std::cout << "Restaurant Simulation Started" << std::endl;
    restaurant->acceptCustomers(4);
    sleep(1);
    restaurant->createOrder(1, {"Pizza", "Pasta", "Salad", "Desert", "Drink", "Drink"});
    std::cout << "Confirm Order" << std::endl;
    sleep(1);
    RestaurantMomento* momento = restaurant->save(1);
    sleep(1);
    std::cout <<"Customer wants to change order" << std::endl;
    sleep(1);
    restaurant->CleanOrders(1);
    restaurant->createOrder(1, {"Pizza", "Pasta", "Salad", "Desert", "Drink", "Drink", "Drink"});
    sleep(1);
    cout<<"Confirm Order"<<endl;
    sleep(1);
    restaurant->prepareAndDeliverOrders(1);
    sleep(1);
    restaurant->acceptCustomers(5);
    sleep(1);
    restaurant->createOrder(2, {"Pizza", "Pasta", "Salad", "Desert", "Drink", "Drink"});
    sleep(1);
    cout<<"Confirm Order"<<endl;
    restaurant->prepareAndDeliverOrders(2);
    sleep(1);
    restaurant->MakePayment(1);
    sleep(3);
    restaurant->MakePayment(2);
}