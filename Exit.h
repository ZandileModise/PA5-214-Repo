#ifndef EXIT_H_
#define EXIT_H_
#include "PartyStates.h"
#include <string>
class Exit : public PartyStates {
  public:
    Exit();
  PartyStates *pay() override;
  PartyStates *order() override;
  PartyStates *exit() override;
  PartyStates *completeOrder() override;
  PartyStates *cancelOrder() override;


};
#endif  