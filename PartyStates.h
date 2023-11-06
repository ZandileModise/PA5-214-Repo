#pragma once
using namespace std;
#include"Exceptions.h"
class PartyStates
{
public:
	PartyStates();
	virtual	PartyStates* pay() = 0;
	virtual PartyStates* order()=0;

  void complain();
	virtual PartyStates* completeOrder() = 0;
	virtual PartyStates* cancelOrder() = 0;

  virtual PartyStates* exit() = 0;
	int tableNum;
    string stateName;


protected:
	PartyStates * state;

};

