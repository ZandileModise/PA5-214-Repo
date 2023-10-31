//
// Created by 77089 on 2023/10/31.
//

#ifndef COS214PROJECT_ORDER_H
#define COS214PROJECT_ORDER_H


#include <string>

class Order {
    float price;
    int quantity;
public:
    Order();
    virtual float getPrice() const = 0;
    virtual void prepare() = 0;
    virtual void deliver() = 0;
    virtual std::string getOrderType() const = 0;
    virtual void incrementQuantity();
     virtual int getQuantity() const;
};


#endif //COS214PROJECT_ORDER_H
