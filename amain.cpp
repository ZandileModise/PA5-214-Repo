#include "Waiter.h"
#include <iostream>

int main() {
    /// Create an initial waiter
    WaiterPrototype* originalWaiter = new Waiter();
    originalWaiter->setID(1);

    /// Clone the waiter
    WaiterPrototype* clonedWaiter = originalWaiter->clone();

    /// Check if the cloned waiter is different
    if (originalWaiter->getID() != clonedWaiter->getID()) {
        std::cout << "Waiter objects are different.\n";
    } else {
        std::cout << "Waiter objects are the same.\n";
    }

    /// Clean up memory
    delete originalWaiter;
    delete clonedWaiter;

    return 0;
}