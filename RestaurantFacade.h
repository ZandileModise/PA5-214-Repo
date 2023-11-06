//
// Created by 77089 on 2023/11/6.
//

/**
 * @file RestaurantFacade.h
 * @brief  Implementation of the RestaurantFacade class, which is used to represent a facade in the restaurant
 * @date [date]
 */


#ifndef COS214PROJECT_RESTAURANTFACADE_H
#define COS214PROJECT_RESTAURANTFACADE_H
#include "Restaurant.h"
#include "RestaurantSimulationCommand.h"
class RestaurantFacade {
public:
    RestaurantFacade();
    void seatCustomers(int numOfCustomers);
    void createOrder(int tableId, const std::vector<std::string>& orderTypes);
    void prepareAndDeliverOrders(int tableId);
    void printOrders(int tableId) ;
    void printReceipt(int tableId);
    bool isPaid(int tableId);
    void cloneRestaurant();
    RestaurantMomento* saveRestaurant(int saveId);
    void restoreRestaurant(RestaurantMomento* momento);
    void maketableAvailable(int tableId);
    void MakePayment(int tableId);
    void execute(RestaurantSimulationCommand* command);
    void displayWaiter(int tableId);
    void assignWaiter(int tableId);
    bool isWaiterAssigned(int tableId);
private:
    Restaurant* restaurant;
};


#endif //COS214PROJECT_RESTAURANTFACADE_H
