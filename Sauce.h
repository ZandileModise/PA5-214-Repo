#ifndef SAUCE_H
#define SAUCE_H

#include <string>

class Sauce {
public:
    Sauce(float price, const std::string& name);
    float getPrice() const;
    
private:
    float price;
    std::string name;
};

#endif // SAUCE_H