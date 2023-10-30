#include "Order.h"
#include <iostream>

int main() {
    // Create an initial order
    Order order(1);
    order.addDish("Pasta");
    order.addDish("Salad");

    // Display the initial order
    std::cout << "Initial Order:\n";
    order.display();

    // Save the state of the order
    OrderMemento memento = order.saveToMemento();

    // Modify the order
    order.addDish("Dessert");
    order.display();

    // Restore the state from the memento
    order.restoreFromMemento(memento);

    // Display the restored order
    std::cout << "Restored Order:\n";
    order.display();

    return 0;
}