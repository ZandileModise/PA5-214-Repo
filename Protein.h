#ifndef __PROTEIN_H_L0FF5A7QYM94__
#define __PROTEIN_H_L0FF5A7QYM94__
#include <iostream>
///////////////////////////////////////////////////////////
/// @brief Protein
///
class Protein
{
    public:
        Protein(std::string name, float price);
        virtual ~Protein();
        float getPrice();

    private:
        std::string name;
        float price;
};

#endif  // __PROTEIN_H_L0FF5A7QYM94__
