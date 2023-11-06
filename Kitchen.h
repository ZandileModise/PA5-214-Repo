//
// Created by 77089 on 2023/11/6.
//

#ifndef COS214PROJECT_KITCHEN_H
#define COS214PROJECT_KITCHEN_H
#include <string>
#include <vector>
#include "TotalOrders.h"

class Kitchen {
private:
    std::vector<TotalOrders> orders;

public:
    void prepareOrder(const std::string& orderType) ;
    void deliverOrders();
    void printOrders();
};


#endif //COS214PROJECT_KITCHEN_H
