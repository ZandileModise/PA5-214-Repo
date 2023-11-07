#include "GotTable.h"
#include "Exceptions.h"
#include "Complain.h"
#include "Exit.h"
#include "addOrder.h"

/**
 * @file GotTable.cpp
 * @brief This file contains the implementation of the GotTable class.
 */

/**
 * @brief Pays for the order.
 * @throw Exceptions when customers cannot pay bill before they order.
 * @return Nothing.
 */
PartyStates* GotTable::pay() {
  throw new Exceptions("Cannot pay bill before you order");
}

/**
 * @brief Completes an order.
 * @throw Exceptions when customers cannot complete order before they order.
 * @return Nothing.
 */
PartyStates* GotTable::completeOrder() {
  throw new Exceptions("Cannot complete order before you order");
}

/**
 * @brief Cancels an order.
 * @throw Exceptions when customers cannot cancel order before they order.
 * @return Nothing.
 */
PartyStates*  GotTable::cancelOrder() {
  throw new Exceptions("Cannot cancel order before you order");
}

/**
 * @brief Orders.
 * @return A new addOrder object.
 */
PartyStates* GotTable::order() {
  return new addOrder();
}

/**
 * @brief Exits the system.
 * @return A new Exit object.
 */
PartyStates* GotTable::exit() {
  return new Exit();
}