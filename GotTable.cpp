#include "GotTable.h"
#include "Exceptions.h"
#include "Complain.h"
#include "Exit.h"
#include "Order.h"
PartyStates* GotTable::getTable() {
  throw new Exceptions("You already have a table");
}
PartyStates* GotTable::pay() {
  throw new Exceptions("Cannot pay bill before you order");
}
PartyStates* GotTable::tip() {
  throw new Exceptions("Cannot tip before you order");
}
PartyStates* GotTable::completeOrder() {
throw new Exceptions("Cannot complete order before you order");
}
PartyStates*  GotTable::cancelOrder() {
  throw new Exceptions("Cannot cancel order before you order");
}
PartyStates* GotTable::addOrder() {
  return order();
}
PartyStates* GotTable::order() {
  return new Order();
}

PartyStates* GotTable::exit() {
  return Exit();
}