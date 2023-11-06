#include"Arrival.h"
#include"Restaurant.h"
#include"GotTable.h"
#include"Exceptions.h"
#include"Complain.h"
#include "Exit.h"
Arrival::Arrival() {stateName="Arrival State";};
PartyStates* Arrival::pay() {
  throw  new Exceptions("Cannot pay bill before you order");
}

PartyStates* Arrival::order() {
  throw new Exceptions("Cannot order before you get a table");
}


PartyStates* Arrival::completeOrder() {
  throw new Exceptions("Cannot complete order before you order");
}

PartyStates* Arrival::cancelOrder() {
  throw new Exceptions("Cannot Cancel order before you order");
}

PartyStates *Arrival::exit() {
    return new Exit();
}


