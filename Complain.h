#pragma once
#include "CustomerStates.h"
#include<string>
class Complain {

    private:
    string customerId;
    string complaint;
    int waterID;

 public:
  Complain(std::string customerID, std::string complaint, int waterId)
  :customerId(customerID), complaint(complaint), waterID(waterId) {
    }
    string getCustomerID() {
        return customerId;
    }
    string getComplaint() {
        return complaint;
    }
    int getWaterID() {
        return waterID;
    }
    void setCustomerID(string customerID) {
        this->customerId = customerID;
    }
    void setComplaint(string complaint) {
        this->complaint = complaint;
    }
    void setWaterID(int waterID) {
        this->waterID = waterID;
}
};

