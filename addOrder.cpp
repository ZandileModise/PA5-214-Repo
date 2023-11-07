#include "addOrder.h"
#include "Exit.h"

/**
 * @file addOrder.cpp
 * @brief This file contains the implementation of the addOrder class.
 */

/**
 * @brief Default constructor for addOrder. Initializes stateName to "Order".
 */
addOrder::addOrder() {
    stateName = "Order";
}

/**
 * @brief Cancels an order.
 * @return A new addOrder object.
 */
PartyStates* addOrder::cancelOrder() {
    return new addOrder();
}

/**
 * @brief Exits the system.
 * @return A new Exit object.
 */
PartyStates* addOrder::exit() {
    return new Exit();
}

/**
 * @brief Pays for the order.
 * @throw Exceptions when customers can only pay after their order has been delivered.
 * @return Nothing.
 */
PartyStates* addOrder::pay() {
    throw Exceptions("Customers can only pay after their order has been delivered");
}

/**
 * @brief Completes an order.
 * @return A new addOrder object.
 */
PartyStates* addOrder::completeOrder() {
    return new addOrder();
}

/**
 * @brief Orders.
 * @return A pointer to this addOrder object.
 */
PartyStates* addOrder::order() {
    return this;
}