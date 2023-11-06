#pragma once
using namespace std;
#include"Exceptions.h"
class PartyState
{
public:
	PartyState();
	virtual PartyState* getTable()=0;
	virtual	PartyState* pay() = 0;
	virtual PartyState* order()=0;
	virtual PartyState* tip() = 0;
  void complain();
	virtual PartyState* completeOrder() = 0;
	virtual PartyState* cancelOrder() = 0;
	virtual PartyState* addOrder() = 0;
  virtual PartyState* exit() = 0;
	int tableNum;


protected:
	PartyState * state;

};

