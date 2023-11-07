//
// Created by 77089 on 2023/11/6.
//

#ifndef COS214PROJECT_RESTAURANTSIMULATIONCOMMAND_H
#define COS214PROJECT_RESTAURANTSIMULATIONCOMMAND_H

#include "RestaurantCommand.h"
#include "Restaurant.h"
/**
 * @file RestaurantSimulationCommand.h
 * @brief Implementation of the RestaurantCommand class, which is used to represent a abstract command in the restaurant
 * @date [date]
 */

class RestaurantSimulationCommand : public RestaurantCommand{


public:
    RestaurantSimulationCommand(Restaurant* restaurant);
    Restaurant* restaurant;
    void execute() override;
};


#endif //COS214PROJECT_RESTAURANTSIMULATIONCOMMAND_H
