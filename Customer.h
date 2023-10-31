//
// Created by 77089 on 2023/10/31.
//

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
