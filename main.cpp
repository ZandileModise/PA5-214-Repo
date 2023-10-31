#include <iostream>
#include "Restaurant.h"
#include "Order.h"
#include "OrderFactory.h"
#include "TotalOrders.h"

int main() {
    Restaurant* restaurant = Restaurant::GetInstance();
    restaurant->acceptCustomers(4);
    TotalOrders totalOrders;
    restaurant->createOrder(1, "Pizza");
    restaurant->createOrder(1, "Pasta");
    restaurant->createOrder(1, "Pizza");
    restaurant->createOrder(1, "Pasta");
    restaurant->createOrder(1, "Pizza");
    restaurant->prepareAndDeliverOrders(1);
    restaurant->printReceipt(1);
    cout<<"-------------------"<<endl;
    restaurant->acceptCustomers(5);
    restaurant->createOrder(2, "Pizza");
    restaurant->createOrder(2, "Pasta");
    restaurant->createOrder(2, "Pizza");
    restaurant->prepareAndDeliverOrders(2);
    restaurant->printReceipt(2);

    return 0;
}
