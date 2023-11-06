//
// Created by 77089 on 2023/10/31.
//

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
