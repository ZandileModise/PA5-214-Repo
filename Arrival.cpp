#include"Arrival.h"
#include"Restaurant.h"
#include"GotTable.h"
#include"Exceptions.h"
#include"Complain.h"
#include "Exit.h"

/**
 * @file Arrival.cpp
 * @brief This file contains the implementation of the Arrival class.
 */

/**
 * @brief Default constructor for Arrival. Initializes stateName to "Arrival State".
 */
Arrival::Arrival() {
  stateName="Arrival State";
}

/**
 * @brief Pays for the order.
 * @throw Exceptions when customers cannot pay bill before they order.
 * @return Nothing.
 */
PartyStates* Arrival::pay() {
  throw  new Exceptions("Cannot pay bill before you order");
}

/**
 * @brief Orders.
 * @throw Exceptions when customers cannot order before they get a table.
 * @return Nothing.
 */
PartyStates* Arrival::order() {
  throw new Exceptions("Cannot order before you get a table");
}

/**
 * @brief Completes an order.
 * @throw Exceptions when customers cannot complete order before they order.
 * @return Nothing.
 */
PartyStates* Arrival::completeOrder() {
  throw new Exceptions("Cannot complete order before you order");
}

/**
 * @brief Cancels an order.
 * @throw Exceptions when customers cannot cancel order before they order.
 * @return Nothing.
 */
PartyStates* Arrival::cancelOrder() {
  throw new Exceptions("Cannot Cancel order before you order");
}

/**
 * @brief Exits the system.
 * @return A new Exit object.
 */
PartyStates *Arrival::exit() {
  return new Exit();
}