//
// Created by 77089 on 2023/11/7.
//
/**
 * @file TableIterator.h
 * @brief Implementation of the TableIterator class, which is used to represent a table iterator in the restaurant
 * @date [date]
 */
#ifndef COS214PROJECT_TABLEITERATOR_H
#define COS214PROJECT_TABLEITERATOR_H

#include "Iterator.h"
class TableIterator : public Iterator{
private:
    std::vector<Table> tables;
    int index;
public:
    TableIterator( std::vector<Table>& tables);
    void first() override;
    void next() override;
    bool isDone() const override;
    Table currentItem() const override;

};


#endif //COS214PROJECT_TABLEITERATOR_H
