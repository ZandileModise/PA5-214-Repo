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
    cout << "confirming order" << endl <<"Order confirmed" << endl;
    sleep(1);
    restaurant->printOrders(1);
    sleep(5);
    restaurant->prepareAndDeliverOrders(1);
    sleep(1);
    cout<<"Customer is eating"<<endl;
    sleep(2);
    restaurant->acceptCustomers(8);
    sleep(2);
    restaurant->assignWaiter(2);
    sleep(1);
    restaurant->createOrder(2, {"Pasta", "Drink", "Pizza","Drink"});
    sleep(1);
    cout << "confirming order" << endl <<"Order confirmed" << endl;
    sleep(1);
    restaurant->printOrders(2);
    sleep(5);
    restaurant->prepareAndDeliverOrders(2);
    sleep(1);
    cout<<"Customer is eating"<<endl;
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
    cout << "confirming order" << endl <<"Order confirmed" << endl;
    sleep(1);
    restaurant->printOrders(1);
    sleep(5);
    restaurant->prepareAndDeliverOrders(1);
    sleep(1);
    cout<<"Customer is eating"<<endl;
    sleep(5);
    cout <<"waiter is busy"<<endl;
    restaurant->removeWaiter(1);
    restaurant->MakePayment(1);
    sleep(5);
    restaurant->assignWaiter(1);
    sleep(1);
    restaurant->MakePayment(1);


}