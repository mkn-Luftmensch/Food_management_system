#ifndef LIST_H
#define LIST_H
#include "Ingredient.h"

// an abstract class for implementing a list of ingredients
class List {
    protected:
    // declare size of the list in derived classes
    int size;
    // track the current size in derived classes
    int current_size;
    public:
    
    List();
    List(int size);
    // declare virtual function to add ingredients to a list.
    virtual void add_ingredient(Ingredient new_ingredient) = 0;
    // declare virtual function to remove ingredients from a list
    virtual void remove_ingredient(Ingredient current_ingredient) = 0;
    // pure virtual function to print out the list of ingredients. Implementaing further in derived classes
    virtual void print_ingredients() = 0;
    virtual~List();
};

#endif