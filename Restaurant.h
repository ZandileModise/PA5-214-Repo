//
// Created by 77089 on 2023/10/28.
//

#ifndef COS214PROJECT_RESTAURANT_H
#define COS214PROJECT_RESTAURANT_H

/**
 * @file Restaurant.h
 * @brief Implementation of the Restaurant class, it uses the Singleton pattern
 * to ensure that only one instance of the restaurant is created, and flyweight
 * pattern to ensure that only ten instance of the tables are created
 * @date [date]
 */

#include"RestaurantMomento.h"
#include "Table.h"
#include "TotalOrders.h"
#include <map>
#include <vector>
class Customer;
using namespace std;
class Restaurant {
    static Restaurant *instance;
    vector<Table> tables;
    map<int, TotalOrders> totalOrders;

public:
    static Restaurant *GetInstance();
    Restaurant();
    void acceptCustomers(int numOfCustomers);
    void MakeTableAvailable(int tableId);
    void createOrder(int tableId, const string &orderType);
    void prepareAndDeliverOrders(int tableId);
    void printOrders(int tableId);
    float calculateTotalPrice(int tableId);
    void printReceiptHeader(int tableId);
    void printReceiptFooter(int tableId);
    void printReceiptBody(int tableId);
    void printReceipt(int tableId);
    Restaurant *clone();
    void restore(RestaurantMomento *momento);
    RestaurantMomento *save(int saveId);
};

#endif // COS214PROJECT_RESTAURANT_H
