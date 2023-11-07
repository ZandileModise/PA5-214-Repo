//
// Created by 77089 on 2023/11/6.
//
/**
 * @file DrinkOrder.h
 * @brief Implementation of the DrinkOrder class, which is used to represent a drink order in the restaurant
 * @date [date]
 */
#ifndef COS214PROJECT_DRINKORDER_H
#define COS214PROJECT_DRINKORDER_H


#include "Order.h"

class DrinkOrder : public Order{
    float price = 20;
    int quantity;

public:

    DrinkOrder() : quantity(1) {};
    float getPrice() const override;
    void prepare() override;
    void deliver() override;
    std::string getOrderType() const override;
    Order* clone() override;

};


#endif //COS214PROJECT_DRINKORDER_H
