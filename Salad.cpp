#include "Salad.h"

using namespace std;

/**
 * @brief add ingredient to salad
 * 
 * @param ingredient 
 */
void Salad::addIngredient(SaladIngredient* ingredient) {
    ingredients.push_back(ingredient);
    cout << "Added " << ingredient->getName() << " to salad." << endl;
}

/**
 * @brief get price of salad by calculating total price of ingredients added
 * 
 * @return float 
 */
string Salad::getPrice() {
    float price = 0.0;
    for (auto ingredient : ingredients) {
        price += ingredient->getPrice();
    }

    // add proteins to price if proteins were added
    if (proteins.size() > 0) {
        for (auto protein : proteins) {
            price += protein->getPrice();
        }
    }

    string output;
    output += "-----------------------------------\n";
    output += "Total price of salad is R" + to_string(price) + "\n";
    output += "-----------------------------------\n";

    return output;
}

/**
 * @brief add protein to salad ingredients
 * 
 * @param protein 
 */
void Salad::addProtein(Protein* protein) {
    proteins.push_back(protein);
    cout << "Added " << protein->getName() << " to salad." << endl;
}

/**
 * @brief get price of proteins added to salad
 * 
 * @return float 
//  */
// float SaladIngredient::getIngredientPrice() {
//     float price = 0.0;
//     for (auto protein : proteins) {
//         price += protein->getPrice();
//     }
//     return price;
// }