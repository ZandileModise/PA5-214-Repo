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
  PartyStates* getTable()override;
  PartyStates* pay()override;
  PartyStates* order()override;
  PartyStates* tip()override;

  PartyStates* completeOrder()override;
	PartyStates* addOrder()override;
  PartyStates* cancelOrder()override;
  virtual PartyStates* exit()override;
};

#endif