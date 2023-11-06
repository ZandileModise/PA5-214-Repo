//
// Created by 77089 on 2023/11/1.
//

#ifndef COS214PROJECT_RESTAURANTMOMENTO_H
#define COS214PROJECT_RESTAURANTMOMENTO_H
#include "Restaurant.h"
#include "Table.h"

/**
 * @file RestaurantMomento.h
 * @brief Implementation of the RestaurantMomento class, which is used to represent a momento in the restaurant
 * @date [date]
 */

class RestaurantMomento {
    std::vector<Table> tables;
    std::map<int, TotalOrders> totalOrders;
    int saveId;
public:
    RestaurantMomento(const std::vector<Table>& tables, const std::map<int, TotalOrders>& totalOrders, int saveId);
    const std::vector<Table>& getTables() const;
    const std::map<int, TotalOrders>& getTotalOrders() const;
    int getSaveId() const;
};


#endif //COS214PROJECT_RESTAURANTMOMENTO_H
