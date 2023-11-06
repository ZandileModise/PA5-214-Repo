//
// Created by 77089 on 2023/11/6.
//

#ifndef COS214PROJECT_WAITER_H
#define COS214PROJECT_WAITER_H


#include <vector>

class Waiter {
public:
    Waiter(int waiterId);
    int getWaiterId() const;
    void assignTable(int tableId);
    void removeTable(int tableId);
    std::vector<int> getAssignedTables() const;
    void printAssignedTables() const;
    void printWaiterInfo() const;
private:
    int waiterId;
    std::vector<int> assignedTables;
};


#endif //COS214PROJECT_WAITER_H
