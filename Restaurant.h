//
// Created by 77089 on 2023/10/28.
//

#ifndef COS214PROJECT_RESTAURANT_H
#define COS214PROJECT_RESTAURANT_H

/**
 * @file Restaurant.h
 * @brief Implementation of the Restaurant class, it uses the Singleton pattern to ensure that only one instance of the restaurant is created, and flyweight pattern to ensure that only ten instance of the tables are created
 * @date [date]
 */
#include <vector>
#include "Table.h"
#include "Customer.h"
#include "TotalOrders.h"
#include <map>
using namespace std;

class Restaurant {
    static Restaurant* instance;
    vector<Table> tables;
    vector<Customer> customers;
    map<int, TotalOrders> totalOrders;
public:
    static Restaurant* GetInstance();
    Restaurant();
    void acceptCustomers(int numOfCustomers);
    void MakeTableAvailable(int tableId);
    void createOrder(int tableId, const string& orderType);
    void prepareAndDeliverOrders(int tableId);
    void printOrders(int tableId);
    float calculateTotalPrice(int tableId);
    void printReceipt(int tableId);
};


#endif //COS214PROJECT_RESTAURANT_H
