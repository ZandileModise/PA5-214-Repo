#ifndef GOTTABLE_H
#define GOTTABLE_H
#include "CustomerStates.h"
#include"Arrival.h"
class GotTable :
    public CustomerStates {
 private:
  GotTable() {
}


 public:
  friend class Arrival;
  CustomerStates* getTable()override;
  CustomerStates* pay()override;
  CustomerStates* order()override;
  CustomerStates* tip()override;
  CustomerStates* complain()override;
  CustomerStates* completeOrder()override;
	CustomerStates* addOrder()override;
  CustomerStates* cancelOrder()override;
  virtual CustomerStates* exit()override;
};

#endif