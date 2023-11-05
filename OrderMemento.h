#ifndef ORDER_MEMENTO_H
#define ORDER_MEMENTO_H

#include <string>
#include <vector>

class OrderMemento {
public:
    OrderMemento(int tableNumber, const std::vector<std::string>& dishes);
    int getTableNumber() const;
    std::vector<std::string> getDishes() const;

private:
    int tableNumber;
    std::vector<std::string> dishes;
};

#endif // ORDER_MEMENTO_H