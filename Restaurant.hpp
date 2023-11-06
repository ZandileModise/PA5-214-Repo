//
// Created by 77089 on 2023/10/28.
//

#ifndef RESTAURANT_HPP
#define RESTAURANT_HPP


#include <vector>
#include "Table.hpp"
using namespace std;

class Restaurant {
    static Restaurant* instance;
public:
    static Restaurant* GetInstance();
    vector<Table> tables;
    Restaurant();
    void AcceptCustomers(int numOfCustomers);
};


#endif //COS214PROJECT_RESTAURANT_H
