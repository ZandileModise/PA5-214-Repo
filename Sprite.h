#ifndef __SPRITE_H_IBO2781VLX5H__
#define __SPRITE_H_IBO2781VLX5H__
#include "Drink.h"	
///////////////////////////////////////////////////////////
/// @brief Sprite
///
class Sprite : public Drink
{
    public:
        string getName();
        float getPrice();
    private:
        float price = 39.99;
        string name = "Sprite";	
};

#endif  // __SPRITE_H_IBO2781VLX5H__
