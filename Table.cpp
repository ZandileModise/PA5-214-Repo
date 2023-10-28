//
// Created by 77089 on 2023/10/28.
//

#include "Table.h"

Table::Table(int id) {
    this->id = id;
    this->isAvailable = true;
}

void Table::MarkReserved() {
    this->isAvailable = false;
}


void Table::MakeAvailable() {
    this->isAvailable = true;
}