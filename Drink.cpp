#include "Drink.h"

using namespace std;

/**
 * @brief Destroy the Drink:: Drink object
 * 
 */
Drink::~Drink() {}

/**
 * @brief Get the price of the drink
 * 
 * @return float 
 */
float Drink::getPrice() { return price; }

/**
 * @brief Get the name of the drink
 * 
 * @return string 
 */
string Drink::getName() { return name; }