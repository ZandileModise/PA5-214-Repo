#pragma once
#include "PartyStates.h"
class addOrder :
        public PartyStates
{
    addOrder();
    PartyStates* pay()override;
    PartyStates* order()override;
    PartyStates* exit()override;
    PartyStates* completeOrder()override;
    PartyStates* cancelOrder()override;

};

