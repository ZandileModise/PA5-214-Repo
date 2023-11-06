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
#include "RestaurantMomento.h"
#include "Waiter.h"
#include <map>
using namespace std;
class RestaurantMomento;
class Restaurant {
    static Restaurant* instance;
    vector<Table> tables;
    map<int, TotalOrders> totalOrders;
    std::vector<Waiter> waiters;
public:
    static Restaurant* GetInstance();
    Restaurant();
    void acceptCustomers(int numOfCustomers);
    void MakeTableAvailable(int tableId);
    void createOrder(int tableId, const std::vector<std::string>& orderTypes);
    void prepareAndDeliverOrders(int tableId);
    void printOrders(int tableId);
    float calculateTotalPrice(int tableId);
    void printReceiptHeader(int tableId);
    void printReceiptFooter(int tableId);
    void printReceiptBody(int tableId);
    void printReceipt(int tableId);
    Restaurant* clone();
    void restore(RestaurantMomento* momento);
    RestaurantMomento* save(int saveId);
    bool Paid(int tableId);
    void MakePayment(int tableId);
    void CleanOrders(int tableId);
    void displayWaiter(int tableId);
    void assignWaiter(int tableId);
    bool isWaiterAssigned(int tableId);
    void removeWaiter(int tableId);
};


#endif //COS214PROJECT_RESTAURANT_H
