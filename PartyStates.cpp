#include "PartyStates.h"
#include<iostream>
#include<string>
using namespace std;

/**
 * @file PartyStates.cpp
 * @brief This file contains the implementation of the PartyStates class.
 */

/**
 * @brief Default constructor for PartyStates.
 */
PartyStates::PartyStates() {

}

/**
 * @brief Records a complaint from a customer.
 * 
 * Asks the user to input the complaint and the customer's ID number,
 * then prints a message indicating that the complaint has been recorded.
 */
void PartyStates::complain() {
  cout << "Input the complain" << endl;
  string complain;
  cout<<"Enter the customer's ID number: ";
  string customerID;
  cin>>customerID;
  cin >> complain;
  cout << "Thank you , the above complain has been recorded and will be reviewed" << endl;
}