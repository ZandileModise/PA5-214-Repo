#include "SaladIngredient.h"

using namespace std;

/**
 * @brief Construct a new Salad Ingredient:: Salad Ingredient object
 * 
 * @param name 
 * @param price 
 */
SaladIngredient::SaladIngredient(std::string name, float price) {
    this->name = name;
    this->price = price;
}

/**
 * @brief get price of salad ingredient
 * 
 * @return float 
 */
float SaladIngredient::getPrice() {
    return price;
}

/**
 * @brief get name of salad ingredient
 * 
 * @return std::string 
 */
std::string SaladIngredient::getName() {
    return name;
}

/**
 * @brief Destroy the Salad Ingredient:: Salad Ingredient object
 *
 * 
 */
SaladIngredient::~SaladIngredient() {}

/**
 * @brief add protein to salad ingredients
 * 
 * @param protein 
 */
void SaladIngredient::addProtein(Protein* protein) {
    proteins.push_back(protein);
}

/**
 * @brief get price of proteins added to salad
 * 
 * @return float 
 */
float SaladIngredient::getIngredientPrice() {
    float price = 0.0;
    for (auto protein : proteins) {
        price += protein->getPrice();
    }
    return price;
}