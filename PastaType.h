#ifndef PASTATYPE_H
#define PASTATYPE_H

#include <string>

class PastaType {
public:
    PastaType(float price, const std::string& name);
    float getPrice() const;
    
private:
    float price;
    std::string name;
};

#endif // PASTATYPE_H