//
// Created by 77089 on 2023/10/28.
//

#include "Table.hpp"

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
