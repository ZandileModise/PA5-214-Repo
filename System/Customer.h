//
// Created by 77089 on 2023/10/31.
//
/**
 * @file Customer.h
 * @brief Implementation of the Customer class, which is used to represent a customer in the restaurant
 * @date [date]
 */

#ifndef COS214PROJECT_CUSTOMER_H
#define COS214PROJECT_CUSTOMER_H


class Customer {
    int id;
    int numOfPeople;
public:
    Customer(int id, int numOfPeople);
    int getId() const;
    int getNumOfPeople() const;

};


#endif //COS214PROJECT_CUSTOMER_H
