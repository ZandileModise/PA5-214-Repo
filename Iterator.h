//
// Created by 77089 on 2023/11/7.
//

#ifndef COS214PROJECT_ITERATOR_H
#define COS214PROJECT_ITERATOR_H
/**
 * @file Iterator.h
 * @brief Implementation of the Iterator class, which is used to represent an iterator in the restaurant
 * @date [date]
 */

#include "Table.h"

class Iterator {
public:
    virtual void first() = 0;
    virtual void next() = 0;
    virtual bool isDone() const = 0;
    virtual Table currentItem() const = 0;
};


#endif //COS214PROJECT_ITERATOR_H
