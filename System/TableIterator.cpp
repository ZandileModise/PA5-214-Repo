//
// Created by 77089 on 2023/11/7.
//

#include "TableIterator.h"

TableIterator::TableIterator(std::vector<Table> &tables) {
    this->tables = tables;
    index = 0;
}

void TableIterator::first() {
    index = 0;
}

void TableIterator::next() {
    index++;
}

bool TableIterator::isDone() const {
    return index >= tables.size();
}

Table TableIterator::currentItem() const {
    return tables[index];
}
