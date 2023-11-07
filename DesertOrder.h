//
// Created by 77089 on 2023/11/6.
//
/**
 * @file DesertOrder.h
 * @brief Implementation of the DesertOrder class, which is used to represent a desert order in the restaurant
 * @date [date]
 */
#ifndef COS214PROJECT_DESERTORDER_H
#define COS214PROJECT_DESERTORDER_H
#include "Order.h"

class DesertOrder : public Order{
    float price = 20;
    int quantity;

public:
    DesertOrder() : quantity(1) {};
    float getPrice() const override;
    void prepare() override;
    void deliver() override;
    std::string getOrderType() const override;
    Order* clone() override;

};


#endif //COS214PROJECT_DESERTORDER_H
