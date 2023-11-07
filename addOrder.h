/**
 * @file addOrder.h
 * @brief This file contains the definition of the addOrder class.
 */

#pragma once
#include "PartyStates.h"

/**
 * @class addOrder
 * @brief A class representing the state of a party that is adding an order.
 * 
 * This class is a friend of the Exit and GotTable classes, and it overrides
 * several methods from the PartyStates class.
 */
class addOrder : public PartyStates
{
    friend class Exit;
    friend class GotTable;

    /**
     * @brief Default constructor for addOrder.
     */
    addOrder();

    /**
     * @brief Pay for the order.
     * @return A pointer to a PartyStates object.
     */
    PartyStates* pay()override;

    /**
     * @brief Order.
     * @return A pointer to a PartyStates object.
     */
    PartyStates* order()override;

    /**
     * @brief Exit the system.
     * @return A pointer to a PartyStates object.
     */
    PartyStates* exit()override;

    /**
     * @brief Complete the order.
     * @return A pointer to a PartyStates object.
     */
    PartyStates* completeOrder()override;

    /**
     * @brief Cancel the order.
     * @return A pointer to a PartyStates object.
     */
    PartyStates* cancelOrder()override;
};