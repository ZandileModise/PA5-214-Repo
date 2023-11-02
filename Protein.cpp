#include "Protein.h"

using namespace std;

/**
 * @brief Construct a new Protein:: Protein object
 * 
 * @param name 
 * @param price 
 */
Protein::Protein(std::string name, float price) {
    this->name = name;
    this->price = price;
}

/**
 * @brief Destroy the Protein:: Protein object
 * 
 */
Protein::~Protein() {}

/**
 * @brief get price of protein
 * 
 * @return float 
 */
float Protein::getPrice() {
    return price;
}