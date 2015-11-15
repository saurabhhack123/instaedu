#include "Item.hpp"

#ifndef _ShoppingCart_hpp
#define _ShoppingCart_hpp

class ShoppingCart
{
private:
    Item* items;
    int arrayEnd;
public:
    ShoppingCart();
    void addItem(Item* newItem);
    double totalPrice();
};

#endif