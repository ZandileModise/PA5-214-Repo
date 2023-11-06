
#ifndef PAID_H_
#define PAID_H_
#include"PartyStates.h"
class Paid : public PartyStates {

  PartyStates *pay() override;
  PartyStates *order() override;
  PartyStates *exit() override;
  PartyStates *completeOrder() override;
  PartyStates *cancelOrder() override;
  PartyStates *addOrder() override;
};
#endif