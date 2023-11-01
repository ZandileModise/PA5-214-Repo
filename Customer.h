#pragma once
#include"CustomerStates.h"
using namespace std;
class Customer
{
private:
	CustomerStates* states;
	int tableNumber;

public:
	Customer();
	~Customer();
	 void getTable();
	 void Pay() ;
	 void Order();
	 void Tip();
	 void Complain();
	 void CompleteOrder();
	 void CancelOrder();

};

