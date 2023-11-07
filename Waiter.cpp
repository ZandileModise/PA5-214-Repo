//
// Created by 77089 on 2023/11/6.
//

#include <iostream>
#include "Waiter.h"

Waiter::Waiter(int waiterId) : waiterId(waiterId) {}

int Waiter::getWaiterId() const {
    return waiterId;
}

void Waiter::assignTable(int tableId) {
    assignedTables.push_back(tableId);
}

void Waiter::removeTable(int tableId) {
    for (int i = 0; i < assignedTables.size(); ++i) {
        if (assignedTables[i] == tableId) {
            assignedTables.erase(assignedTables.begin() + i);
            break;
        }
    }
}

std::vector<int> Waiter::getAssignedTables() const {
    return assignedTables;
}

void Waiter::printAssignedTables() const {
    std::cout << "Waiter " << waiterId << " is assigned to tables: ";
    for (auto t : assignedTables) {
        std::cout << t << " ";
    }
    std::cout << "\n";
}

void Waiter::printWaiterInfo() const {
    std::cout << "Waiter " << waiterId << " is assigned to tables: ";
    for (auto t : assignedTables) {
        std::cout << t << " ";
    }
    std::cout << "\n";
}

Waiter* Waiter::clone() {
    return new Waiter(*this);
}

