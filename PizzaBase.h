#ifndef PIZZABASE_H
#define PIZZABASE_H

#include <string>

class PizzaBase {
public:
    PizzaBase(float price, const std::string& name);
    float getPrice() const;
    
private:
    float price;
    std::string name;
};

#endif // PIZZABASE_H