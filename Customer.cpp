#include "Customer.h"
#include"Arrival.h"
#include<iostream>
Customer::Customer() {
	states = new Arrival();
	std::cout << "Welcome to our Restaurant, Enjoy!!" << endl;
}
void Customer::getTable() {
	try {
		states = states->getTable();
		tableNumber = states->tableNum;
	}
	catch (Exceptions* exc) {
		cout << exc->message << endl;
	}
		
}
