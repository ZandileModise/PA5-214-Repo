#include "PizzaProtein.h"

using namespace std;

/**
 * @brief Construct a new PizzaProtein:: PizzaProtein object
 * 
 * @param name 
 * @param price 
 */
PizzaProtein::PizzaProtein(std::string name, float price) {
    this->name = name;
    this->price = price;
}


/**
 * @brief get price of protein
 * 
 * @return float 
 */
float PizzaProtein::getPrice() {
    return price;
}

/**
 * @brief get name of protein
 * 
 * @return string 
 */
string PizzaProtein::getName() {
    return name;
}