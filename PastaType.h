#ifndef PASTATYPE_H
#define PASTATYPE_H

#include <string>
#include "Pasta.h"
/**
 * @class PastaType
 * @brief A class representing a type of pasta.
 *
 * This class provides information about a type of pasta, including its price and name.
 */
class PastaType : public Pasta{
public:
    /**
     * @brief Constructor for PastaType class.
     *
     * Initializes a PastaType object with the given price and name.
     *
     * @param price The price of the pasta type.
     * @param name  The name of the pasta type.
     */
    PastaType(float price, const std::string& name);

    /**
     * @brief Get the price of the pasta type.
     *
     * @return The price of the pasta type.
     */
    float getPrice() const;
    
private:
    float price;         ///< The price of the pasta type.
    std::string name;    ///< The name of the pasta type.
};

#endif // PASTATYPE_H
