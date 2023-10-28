//
// Created by 77089 on 2023/10/28.
//

#ifndef COS214PROJECT_RESTAURANT_H
#define COS214PROJECT_RESTAURANT_H


#include <vector>
#include "Table.h"
using namespace std;

class Restaurant {
public:
    vector<Table> tables;
    Restaurant(int numberOfTables);
    void AcceptCustomers(int numOfCustomers);
};


#endif //COS214PROJECT_RESTAURANT_H
