#include <iostream>
#include "Restaurant.h"
#include "Order.h"
#include "OrderFactory.h"
#include "TotalOrders.h"
#include "RestaurantMomento.h"

int main() {
    Restaurant* restaurant = Restaurant::GetInstance();
    restaurant->acceptCustomers(3);
    restaurant->acceptCustomers(2);
    TotalOrders totalOrders;
    restaurant->createOrder(1, "Pizza");
    restaurant->createOrder(1, "Pasta");
    restaurant->createOrder(1, "Pizza");
    restaurant->createOrder(1, "Drink");
    restaurant->createOrder(1, "Salad");
    restaurant->printReceipt(1);
    cout<<"-------------------"<<endl;
    cout<<"Test case for prototype pattern"<<endl;
    Restaurant* clonedRestaurant = restaurant->clone();
    clonedRestaurant->printReceipt(1);

    cout<<"-------------------"<<endl;
    cout<<"Test case for memento pattern"<<endl;
    RestaurantMomento* momento = restaurant->save(1);
    restaurant->createOrder(1, "Pizza");
    restaurant->createOrder(1, "Pasta");
    restaurant->restore(momento);
    restaurant->printReceipt(1);
    return 0;
}
