#include"Arrival.h"
#include"Restaurant.h"
#include"GotTable.h"
#include"Exceptions.h"
#include"Complain.h"


PartyStates* Arrival::pay() {
  throw  new Exceptions("Cannot pay bill before you order");
}

PartyStates* Arrival::order() {
  throw new Exceptions("Cannot order before you get a table");
}

PartyStates* Arrival::tip() {
  throw new Exceptions("Cannot Tip before you order");
}

PartyStates* Arrival::completeOrder() {
  throw new Exceptions("Cannot complete order before you order");
}

PartyStates* Arrival::cancelOrder() {
  throw new Exceptions("Cannot Cancel order before you order");
}




