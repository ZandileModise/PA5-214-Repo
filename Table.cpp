//
// Created by 77089 on 2023/10/28.
//
/**
 * @file Table.cpp
 * @brief Implementation Table class, which is used to represent a table in the restaurant, each table has a unique id, a state and size of 4
 * @date [date]
 */
#include "Table.h"

Table::Table(int id) {
    this->id = id;
    this->isAvailable = true;
    waiter = nullptr;
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


Table* Table::clone() {
    return new Table(*this);
}

int Table::getWaiterId() {
    return waiter->getWaiterId();
}

void Table::assignWaiter(int i) {
    waiter = new Waiter(i);
}

bool Table::isWaiterAssigned() {
    return waiter != nullptr;
}

int Table::getNumberOfTables() {
    return 10;
}

Table Table::getTable(int i) {
    return Table(i);
}


