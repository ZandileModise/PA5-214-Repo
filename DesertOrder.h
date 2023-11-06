//
// Created by 77089 on 2023/11/6.
//

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
