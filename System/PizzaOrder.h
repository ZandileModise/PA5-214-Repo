//
// Created by 77089 on 2023/10/31.
//
/**
 * @file PizzaOrder.h
 * @brief Implementation of the PizzaOrder class, which is used to represent a pizza order in the restaurant
 * @date [date]
 */

#ifndef COS214PROJECT_PIZZAORDER_H
#define COS214PROJECT_PIZZAORDER_H
#include "Order.h"

class PizzaOrder : public Order {
float price = 100;
int quantity;
public:
    PizzaOrder() : quantity(1) {};
    void prepare() override;
    void deliver() override;
    float getPrice() const override;
    std::string getOrderType() const override;
    Order* clone() override;
};


#endif //COS214PROJECT_PIZZAORDER_H
