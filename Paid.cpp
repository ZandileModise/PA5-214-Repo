#include "Paid.h"
#include "Exit.h"
Paid::Paid(){stateName="Paid";}
PartyStates *Paid::pay() { throw Exceptions("Customers have already paid"); }
PartyStates *Paid::order() { return NULL; }
PartyStates *Paid::exit() { return new Exit(); }
PartyStates *Paid::completeOrder() {
  throw Exceptions("Order has already been processed and served and paid for");
}
PartyStates *Paid::cancelOrder() {
  throw Exceptions("There is no order to cancel");
}
