//
// Created by 77089 on 2023/10/31.
//
/**
 * @file TotalOrders.h
 * @brief Implementation of the TotalOrder class, it uses composite pattern to ensure that the orders are stored in a tree structure
 * @date [date]
 */

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
    ~TotalOrders();
    TotalOrders(const TotalOrders& other);
    TotalOrders& operator=(const TotalOrders& other);
    void addOrder(const string& orderType);
    double calculateTotalPrice();
    void printOrders();
    void prepareAndDeliverOrders();
    bool Paid();
    void prepare();
    void deliver();
};


#endif //COS214PROJECT_TOTALORDERS_H
