//
// Created by 77089 on 2023/10/31.
//

#ifndef COS214PROJECT_ORDERFACTORY_H
#define COS214PROJECT_ORDERFACTORY_H
#include "Order.h"
#include <memory>
#include <string>
#include "Table.h"
class OrderFactory {
public:
    Order* createOrder(const std::string& orderType);
};


#endif //COS214PROJECT_ORDERFACTORY_H
