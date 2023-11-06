#ifndef ARRIVAL_H_
#define ARRIVAL_H_
#include "PartyStates.h"
/**
 * @class Arrival
 * this is the state that the customer is in when they first arrive at the restaurant
*/
class Arrival :public PartyStates {
 private:
  Arrival() {
}
 public:

  friend class Customer;
  PartyStates* getTable()override;
  PartyStates* pay()override;
  PartyStates* order()override;
  PartyStates* tip()override;
  PartyStates* addOrder()override;
  PartyStates* completeOrder()override;
  PartyStates* cancelOrder()override;
  PartyStates* exit() override;
};

#endif