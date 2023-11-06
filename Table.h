//
// Created by 77089 on 2023/10/28.
//

#ifndef COS214PROJECT_TABLE_H
#define COS214PROJECT_TABLE_H
#include <vector>
#include "OrderFactory.h"
#include "Waiter.h"
/**
 * @file Table.h
 * @brief Implementation Table class, which is used to represent a table in the restaurant, each table has a unique id, a state and size of 4
 * @date [date]
 */

class Table {
private:
    Waiter* waiter;
public:
    int id;
    bool isAvailable;
    int tableSize;
    Table(int id);
    void MarkReserved();
    void MakeAvailable();
    int getId() const;
    bool getState();
    int getTableSize();
    Table* clone();
    int getWaiterId();
    void assignWaiter(int i);
    bool isWaiterAssigned();
};


#endif //COS214PROJECT_TABLE_H
