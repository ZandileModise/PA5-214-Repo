#ifndef GOTTABLE_H
#define GOTTABLE_H
#include "PartyStates.h"
#include"Arrival.h"
class GotTable :
    public PartyState {
 private:
  GotTable() {
}


 public:
  friend class Arrival;
  friend class Table;
  PartyState* getTable()override;
  PartyState* pay()override;
  PartyState* order()override;
  PartyState* tip()override;

  PartyState* completeOrder()override;
	PartyState* addOrder()override;
  PartyState* cancelOrder()override;
  virtual PartyState* exit()override;
};

#endif