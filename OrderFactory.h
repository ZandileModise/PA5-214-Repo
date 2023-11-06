//
// Created by 77089 on 2023/10/31.
//
/**
 * @file OrderFactory.h
 * @brief Implementation of the OrderFactory class, which is used to represent a factory that creates orders in the restaurant
 * @date [date]
 */
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
