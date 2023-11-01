#include"Arrival.h"
#include"Restaurant.h"
#include"GotTable.h"
#include"Exceptions.h"
#include"Complain.h"
CustomerStates* Arrival::getTable() {
  if (Restaurant::maxNumOfTables <= Restaurant::numberOfTablesOccupied) {
    throw new Exceptions("The Restaurant Is Full Right Now , we will notify you if there are any changes");
  } else {
    tableNum = ++Restaurant::numberOfTablesOccupied;
    return new GotTable();
  }
}

CustomerStates* Arrival::pay() {
  throw  new Exceptions("Cannot pay bill before you order");
}

CustomerStates* Arrival::order() {
  throw new Exceptions("Cannot order before you get a table");
}

CustomerStates* Arrival::tip() {
  throw new Exceptions("Cannot Tip before you order");
}

CustomerStates* Arrival::completeOrder() {
  throw new Exceptions("Cannot complete order before you order");
}

CustomerStates* Arrival::cancelOrder() {
  throw new Exceptions("Cannot Cancel order before you order");
}




