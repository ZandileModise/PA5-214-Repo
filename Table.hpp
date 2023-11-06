//
// Created by 77089 on 2023/10/28.
//

#ifndef TABLE_HPP
#define TABLE_HPP
#include <list>

class Table {
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

    

};


#endif //COS214PROJECT_TABLE_H
