#ifndef TOPPINGS_H
#define TOPPINGS_H

#include <string>

class Toppings {
public:
    Toppings(float price, const std::string& name);
    float getPrice() const;
    void setPrice(float p);
    void setName(std::string name);
    std::string getName();

    
private:
    float price;
    std::string name;
};

#endif // TOPPINGS_H