#ifndef GARNISH_H
#define GARNISH_H

#include <string>

class Garnish {
public:
    Garnish(float price, const std::string& name);
    float getPrice() const;
    
private:
    float price;
    std::string name;
};

#endif // GARNISH_H