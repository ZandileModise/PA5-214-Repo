#include "Exit.h"

PartyStates* Exit::pay() {
  throw Exceptions("Customer have left");
}
PartyStates* Exit::order() {
  throw Exceptions("Customer have left");
}
PartyStates* Exit::exit() {
  throw Exceptions("Customer have left");
}
PartyStates* Exit::completeOrder() {
  throw Exceptions("Customer have left");
}
PartyStates* Exit::cancelOrder() {
  throw Exceptions("Customer have left");
}
