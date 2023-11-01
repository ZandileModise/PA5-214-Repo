#pragma once
using namespace std;
#include"Exceptions.h"
class CustomerStates
{
public:
	CustomerStates();
	virtual CustomerStates* getTable()=0;
	virtual	CustomerStates* pay() = 0;
	virtual CustomerStates* order()=0;
	virtual CustomerStates* tip() = 0;
  void complain();
	virtual CustomerStates* completeOrder() = 0;
	virtual CustomerStates* cancelOrder() = 0;
	virtual CustomerStates* addOrder() = 0;
  virtual CustomerStates* exit() = 0;
	int tableNum;


protected:
	CustomerStates * state;

};

