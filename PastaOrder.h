//
// Created by 77089 on 2023/10/31.
//

#ifndef COS214PROJECT_PASTAORDER_H
#define COS214PROJECT_PASTAORDER_H

#include "Order.h"
#include "Table.h"
class PastaOrder : public Order{
 float price = 50;
 int quantity;
public:
    PastaOrder() : quantity(1) {};
    float getPrice() const override;
    void prepare() override;
    void deliver() override;
    std::string getOrderType() const override;
    Order* clone() override;

};


#endif //COS214PROJECT_PASTAORDER_H
