//
// Created by 77089 on 2023/11/1.
//

#include "RestaurantMomento.h"

RestaurantMomento::RestaurantMomento(const std::vector<Table>& tables, const std::map<int, TotalOrders>& totalOrders, int saveId) {
    this->tables = tables;
    this->totalOrders = totalOrders;
    this->saveId = saveId;
}

const std::vector<Table>& RestaurantMomento::getTables() const {
    return tables;
}

const std::map<int, TotalOrders>& RestaurantMomento::getTotalOrders() const {
    return totalOrders;
}

int RestaurantMomento::getSaveId() const {
    return saveId;
}


