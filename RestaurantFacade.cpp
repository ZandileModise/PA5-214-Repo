//
// Created by 77089 on 2023/11/6.
//

#include "RestaurantFacade.h"

RestaurantFacade::RestaurantFacade() {
    restaurant = Restaurant::GetInstance();
}

void RestaurantFacade::seatCustomers(int numOfCustomers) {
    restaurant->acceptCustomers(numOfCustomers);
}

void RestaurantFacade::createOrder(int tableId, const std::string &orderType) {
    restaurant->createOrder(tableId, orderType);
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

