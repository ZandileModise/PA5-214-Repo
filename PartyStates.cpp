#include "PartyStates.h"
#include<iostream>
#include<string>
using namespace std;
PartyState::PartyState() {

}
void PartyState::complain() {
  cout << "Input the complain" << endl;
  string complain;
  cout<<"Enter the customer's ID number: ";
  string customerID;
  cin>>customerID;
  cin >> complain;
  cout << "Thank you , the above complain has been recorded and will be reviewed" << endl;
  

}
