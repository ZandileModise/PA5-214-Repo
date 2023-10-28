#include <iostream>
#include "Restaurant.h"

int main() {
    Restaurant restaurant;
    restaurant.AcceptCustomers(5);
    restaurant.AcceptCustomers(12);
    restaurant.AcceptCustomers(3);
    restaurant.AcceptCustomers(4);
    restaurant.AcceptCustomers(2);
    restaurant.AcceptCustomers(1);
    restaurant.AcceptCustomers(6);
    restaurant.AcceptCustomers(7);

    return 0;
}
