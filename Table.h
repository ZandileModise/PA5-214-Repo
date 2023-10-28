//
// Created by 77089 on 2023/10/28.
//

#ifndef COS214PROJECT_TABLE_H
#define COS214PROJECT_TABLE_H
#include <list>

class Table {
public:
    int id;
    bool isAvailable;

    Table(int id);
    void MarkReserved();
    void MakeAvailable();
};


#endif //COS214PROJECT_TABLE_H
