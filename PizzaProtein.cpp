#include "PizzaProtein.h"

using namespace std;

/**
 * @brief Construct a new PizzaProtein:: PizzaProtein object
 * 
 * @param name 
 * @param price 
 */
PizzaProtein::PizzaProtein(float price, const std::string& name, Pizza* p) : price(price), name(name), wrapee(p) {}


/**
 * @brief get price of protein
 * 
 * @return float 
 */
float PizzaProtein::getPrice() {
    return price + wrapee->getPrice();
}

/**
 * @brief get name of protein
 * 
 * @return string 
 */
string PizzaProtein::getName() {
    return name;
}