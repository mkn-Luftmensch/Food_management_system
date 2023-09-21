#ifndef SHOPPINGlIST_H
#define SHOPPINGlIST_H
#include "List.h"
#include "Ingredient.h"

class ShoppingList : public List {
    protected: 
    Ingredient* unavailable_ingredients;
    public: 
    ShoppingList();
    ShoppingList(int size);
    void add_ingredient(Ingredient new_ingredient);
    void remove_ingredient(Ingredient current_ingredient);
    void print_ingredients();
    virtual void buy_ingredients();
    ~ShoppingList();
};



#endif

