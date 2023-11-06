//
// Created by 77089 on 2023/10/28.
//
<<<<<<< HEAD

#include "Table.hpp"
=======
/**
 * @file Table.cpp
 * @brief Implementation Table class, which is used to represent a table in the restaurant, each table has a unique id, a state and size of 4
 * @date [date]
 */
#include "Table.h"
>>>>>>> experimental-merge-of-code

Table::Table(int id) {
    this->id = id;
    this->isAvailable = true;
    this->tableSize = 4;
}

void Table::MarkReserved() {
    this->isAvailable = false;
}


void Table::MakeAvailable() {
    this->isAvailable = true;
}

int Table::getId() const {
    return id;
}

bool Table::getState() {
    return isAvailable;
}

int Table::getTableSize() {
    return 4;
}
<<<<<<< HEAD
=======


Table* Table::clone() {
    return new Table(*this);
}
>>>>>>> experimental-merge-of-code