#include "addOrder.h"

#include"Exit.h"
addOrder::addOrder() {stateName="Order";}
PartyStates* addOrder::cancelOrder() {
    return new addOrder();
}

PartyStates* addOrder::exit() {
    return new Exit();
}


PartyStates* addOrder::pay() {
    throw Exceptions("Customers can only pay after their order has been delivered");
}
PartyStates* addOrder::completeOrder() {
    return new addOrder();
}
PartyStates* addOrder::order() {
    return this;
}