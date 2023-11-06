#include "GotTable.h"
#include "Exceptions.h"
#include "Complain.h"
#include "Exit.h"
#include "addOrder.h"

PartyStates* GotTable::pay() {
  throw new Exceptions("Cannot pay bill before you order");
}
PartyStates* GotTable::completeOrder() {
throw new Exceptions("Cannot complete order before you order");
}
PartyStates*  GotTable::cancelOrder() {
  throw new Exceptions("Cannot cancel order before you order");
}

PartyStates* GotTable::order() {
  return new addOrder();
}

PartyStates* GotTable::exit() {
  return new Exit();
}