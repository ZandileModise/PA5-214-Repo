#include "GotTable.h"
#include 
#include "Complain.h"
#include "Exit.h"
#include "Order.h"
CustomerStates* GotTable::getTable() {
  throw new Exceptions("You already have a table");
}
CustomerStates* GotTable::pay() {
  throw new Exceptions("Cannot pay bill before you order");
}
CustomerStates* GotTable::tip() {
  throw new Exceptions("Cannot tip before you order");
}
CustomerStates* GotTable::completeOrder() {
throw new Exceptions("Cannot complete order before you order");
}
CustomerStates*  GotTable::cancelOrder() {
  throw new Exceptions("Cannot cancel order before you order");
}
CustomerStates* GotTable::addOrder() {
  return order();
}
CustomerStates* GotTable::order() {
  return new Order();
}

CustomerStates* GotTable::exit() {
  return Exit();
}