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
    restaurant->assignWaiter(1);
    sleep(1);
    restaurant->createOrder(1, {"Pasta", "Drink", "Pizza","Drink"});
    sleep(1);
    restaurant->printOrders(1);
    sleep(5);
    restaurant->prepare(1);
    sleep(1);
    restaurant->deliver(1);
    sleep(2);
    restaurant->acceptCustomers(8);
    sleep(2);
    restaurant->assignWaiter(2);
    sleep(1);
    restaurant->createOrder(2, {"Pasta", "Drink", "Pizza","Drink"});
    sleep(1);
    restaurant->printOrders(2);
    sleep(5);
    restaurant->prepare(2);
    sleep(1);
    restaurant->deliver(2);
    sleep(2);
    restaurant->MakePayment(1);
    sleep(5);
    restaurant->MakePayment(2);
    sleep(5);
    restaurant->acceptCustomers(10);
    sleep(1);
    restaurant->assignWaiter(1);
    sleep(1);
    restaurant->createOrder(1, {"Pasta", "Drink", "Pizza","Drink", "Salad", "Desert", "Pasta"});
    sleep(1);
    restaurant->printOrders(1);
    sleep(5);
    restaurant->prepare(1);
    sleep(1);
    restaurant->deliver(1);
    sleep(5);
    restaurant->removeWaiter(1);
    sleep(3);
    restaurant->MakePayment(1);
    sleep(5);
    restaurant->assignWaiter(1);
    sleep(1);
    restaurant->MakePayment(1);



}