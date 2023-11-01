#ifndef ARRIVAL_H
#define ARRIVAL_H
#include "CustomerStates.h"
/**
 * @class Arrival
 * this is the state that the customer is in when they first arrive at the restaurant
*/
class Arrival :public CustomerStates {
 private:
  Arrival() {
}
 public:

  friend class Customer;
  CustomerStates* getTable()override;
  CustomerStates* pay()override;
  CustomerStates* order()override;
  CustomerStates* tip()override;

  CustomerStates* completeOrder()override;
  CustomerStates* cancelOrder()override;
  CustomerStates* exit() override;
};

#endif