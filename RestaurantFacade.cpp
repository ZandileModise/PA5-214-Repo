//
// Created by 77089 on 2023/11/6.
//

#include <iostream>
#include "RestaurantFacade.h"

RestaurantFacade::RestaurantFacade() {
    restaurant = Restaurant::GetInstance();
}

void RestaurantFacade::seatCustomers(int numOfCustomers) {
    restaurant->acceptCustomers(numOfCustomers);
}

void RestaurantFacade::createOrder(int tableId, const std::vector<std::string>& orderTypes) {
    restaurant->createOrder(tableId, orderTypes);
}

void RestaurantFacade::prepareAndDeliverOrders(int tableId) {
    restaurant->prepareAndDeliverOrders(tableId);
}

void RestaurantFacade::printOrders(int tableId) {
    restaurant->printOrders(tableId);
}

void RestaurantFacade::printReceipt(int tableId) {
    restaurant->printReceipt(tableId);
}

bool RestaurantFacade::isPaid(int tableId) {
    return restaurant->Paid(tableId);
}

void RestaurantFacade::cloneRestaurant() {
    Restaurant* clonedRestaurant = restaurant->clone();
}

RestaurantMomento *RestaurantFacade::saveRestaurant(int saveId) {
    return restaurant->save(saveId);
}

void RestaurantFacade::restoreRestaurant(RestaurantMomento *momento) {
    restaurant->restore(momento);
}

void RestaurantFacade::maketableAvailable(int tableId) {
    restaurant->MakeTableAvailable(tableId);
}

void RestaurantFacade::MakePayment(int tableId) {
  restaurant->MakePayment(tableId);
}

void RestaurantFacade::execute(RestaurantSimulationCommand *command) {
    RestaurantSimulationCommand simulationCommand(restaurant);
    simulationCommand.execute();
}

void RestaurantFacade::displayWaiter(int tableId) {
    restaurant->displayWaiter(tableId);
}

void RestaurantFacade::assignWaiter(int tableId) {
    restaurant->assignWaiter(tableId);
}

bool RestaurantFacade::isWaiterAssigned(int tableId) {
    return restaurant->isWaiterAssigned(tableId);
}

void RestaurantFacade::prepare(int tableId) {
    restaurant->prepare(tableId);
}

void RestaurantFacade::deliver(int tableId) {
    restaurant->deliver(tableId);
}

