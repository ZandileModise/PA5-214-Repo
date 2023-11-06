//
// Created by 77089 on 2023/11/6.
//

#ifndef COS214PROJECT_SALADORDER_H
#define COS214PROJECT_SALADORDER_H

#include "Order.h"
class SaladOrder :public Order{
    float price = 30;
    int quantity;

public:
    SaladOrder() : quantity(1) {};
    float getPrice() const override;
    void prepare() override;
    void deliver() override;
    std::string getOrderType() const override;
    Order* clone() override;

};


#endif //COS214PROJECT_SALADORDER_H
