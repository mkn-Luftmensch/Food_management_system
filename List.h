#ifndef LIST_H
#define LIST_H
#include "Ingredient.h"
#include <vector>

class List {
    protected:
    Ingredient *require_ingredients;
    int size;
    int current_size;
    public:
    List();
    List(int size);
    virtual void add_ingredient(Ingredient new_ingredient);
    virtual void remove_ingredient(Ingredient current_ingredient);
    virtual void print_ingredients() = 0;
    ~List();
};

#endif