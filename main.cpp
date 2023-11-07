#include <iostream>
#include "Restaurant.h"
#include "Order.h"
#include "OrderFactory.h"
#include "TotalOrders.h"
#include "RestaurantMomento.h"
#include "RestaurantFacade.h"
#include "RestaurantCommand.h"
#include "RestaurantSimulationCommand.h"

int main() {
//    RestaurantFacade restaurantFacade;
//
//    restaurantFacade.seatCustomers(3);
//    restaurantFacade.seatCustomers(2);
//    restaurantFacade.createOrder(1, "Pizza");
//    restaurantFacade.createOrder(1, "Pasta");
//    restaurantFacade.createOrder(1, "Pizza");
//    restaurantFacade.createOrder(1, "Drink");
//    restaurantFacade.createOrder(1, "Salad");
//    restaurantFacade.printReceipt(1);
//    cout << "-------------------" << endl;
//    RestaurantFacade clonedRestaurantFacade;
//    clonedRestaurantFacade.cloneRestaurant();
//    clonedRestaurantFacade.printReceipt(1);
//    cout << "-------------------" << endl;
//    RestaurantMomento* momento = restaurantFacade.saveRestaurant(1);
//    restaurantFacade.createOrder(1, "Pizza");
//    restaurantFacade.createOrder(1, "Pasta");
//    restaurantFacade.restoreRestaurant(momento);
//    restaurantFacade.printReceipt(1);

//    RestaurantFacade restaurantFacade;
//
//    restaurantFacade.seatCustomers(3);
//    restaurantFacade.createOrder(1, {"Pizza", "Pasta", "Pizza", "Drink", "Salad"});
//    restaurantFacade.printOrders(1);
//
    RestaurantFacade facade;
     facade.execute(new RestaurantSimulationCommand(Restaurant::GetInstance()));


}
