//
// Created by 77089 on 2023/10/31.
//

#ifndef COS214PROJECT_TOTALORDERS_H
#define COS214PROJECT_TOTALORDERS_H

#include <memory>
#include <string>
#include "map"
#include "Order.h"
#include "Table.h"

using namespace std;
class TotalOrders {
private:
    map<string, Order*> orders;
public:
    TotalOrders();
    TotalOrders(const TotalOrders& other);
    TotalOrders& operator=(const TotalOrders& other);
    void addOrder(const string& orderType);
    double calculateTotalPrice();
    void printOrders();
    void prepareAndDeliverOrders();
};


#endif //COS214PROJECT_TOTALORDERS_H
