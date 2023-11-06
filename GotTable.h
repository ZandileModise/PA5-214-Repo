#ifndef GOTTABLE_H
#define GOTTABLE_H
#include "PartyStates.h"
#include"Arrival.h"
class GotTable :
    public PartyStates {
 private:
  GotTable() {
}


 public:
  friend class Arrival;
  friend class Table;
  
  PartyStates* pay()override;
  PartyStates* order()override;

  PartyStates* completeOrder()override;
  PartyStates* cancelOrder()override;
  virtual PartyStates* exit()override;
};

#endif