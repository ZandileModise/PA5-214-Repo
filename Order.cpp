#include<iostream>
using namespace std;
#include "Order.h"

/**
 * @file Order.cpp
 * @brief Implementation of the Order class, it uses the Memento design pattern
 * @date 2023-04-11
 */

/**
 * @brief Default constructor for Order. Initializes quantity to 1 and price to 0.0.
 */
Order::Order() : quantity(1), price(0.0) {}

/**
 * @brief Increments the quantity of the order.
 */
void Order::incrementQuantity() {
    quantity++;
}

/**
 * @brief Gets the quantity of the order.
 * @return The quantity of the order.
 */
int Order::getQuantity() const {
    return quantity;
}

/**
 * @brief Constructor for Order with table number.
 * @param tableNumber The table number for the order.
 */
Order::Order(int tableNumber) : tableNumber(tableNumber) {}

/**
 * @brief Adds a dish to the order.
 * @param dish The name of the dish to add.
 */
void Order::addDish(const std::string& dish) {
    dishes.push_back(dish);
}

/**
 * @brief Gets the table number of the order.
 * @return The table number of the order.
 */
int Order::getTableNumber() const {
    return tableNumber;
}

/**
 * @brief Displays the order.
 */
void Order::display() const {
    std::cout << "Table " << tableNumber << " Order:\n";
    for (const auto& dish : dishes) {
        std::cout << "  - " << dish << "\n";
}
}