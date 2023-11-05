#include <iostream>
#include "Restaurant.h"

int main() {
    Restaurant* restaurant = Restaurant::GetInstance();
    restaurant->AcceptCustomers(4);
    restaurant->AcceptCustomers(4);
    restaurant->AcceptCustomers(7);
    restaurant->AcceptCustomers(9);
    restaurant->AcceptCustomers(12);
    restaurant->AcceptCustomers(16);

    return 0;
}
