#include "Salad.h"

using namespace std;

/**
 * @brief add ingredient to salad
 * 
 * @param ingredient 
 */
void Salad::addIngredient(SaladIngredient* ingredient) {
    ingredients.push_back(ingredient);
}

/**
 * @brief get price of salad by calculating total price of ingredients added
 * 
 * @return float 
 */
float Salad::getPrice() {
    float price = 0.0;
    for (auto ingredient : ingredients) {
        price += ingredient->getPrice();
    }
    return price;
}