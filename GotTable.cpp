#include "GotTable.h"
#include "Exceptions.h"
#include "Complain.h"
#include "Exit.h"
#include "Order.h"
PartyState* GotTable::getTable() {
  throw new Exceptions("You already have a table");
}
PartyState* GotTable::pay() {
  throw new Exceptions("Cannot pay bill before you order");
}
PartyState* GotTable::tip() {
  throw new Exceptions("Cannot tip before you order");
}
PartyState* GotTable::completeOrder() {
throw new Exceptions("Cannot complete order before you order");
}
PartyState*  GotTable::cancelOrder() {
  throw new Exceptions("Cannot cancel order before you order");
}
PartyState* GotTable::addOrder() {
  return order();
}
PartyState* GotTable::order() {
  return new Order();
}

PartyState* GotTable::exit() {
  return Exit();
}