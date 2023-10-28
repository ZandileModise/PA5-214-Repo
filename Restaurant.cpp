//
// Created by 77089 on 2023/10/28.
//

#include <iostream>
#include <algorithm>
#include "Restaurant.h"

using namespace std;

Restaurant::Restaurant(int numberOfTables) {
for (int i = 0; i < numberOfTables; i++) {
        Table table(i + 1);
        tables.push_back(table);
    }
}

void Restaurant::AcceptCustomers(int numOfCustomers) {
    int requiredTables = ((numOfCustomers % 4 == 0) ? numOfCustomers / 4 : (numOfCustomers / 4 + 1));
    std::vector<int> reservedTables;

    for (auto &table: tables) {
        if (table.isAvailable && requiredTables > 0) {
            table.MarkReserved();
            reservedTables.push_back(table.id);
            requiredTables--;
        }
    }

    if (requiredTables == 0) {
        std::cout << "Customers will be seated at table: ";
        for (auto t : reservedTables) {
            std::cout << t << " ";
        }
        std::cout << "\n";
    } else {
        std::cout << "No enough tables available for " << numOfCustomers << " customers." << "\n";
    }
}