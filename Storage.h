#ifndef STORAGE_H
#define STORAGE_H
#include "List.h"
#include "Ingredient.h"

class Storage : public List {
    private:
    // declare a dynamic array of available ingredients
    Ingredient* available_ingredients;
    public:
    // instantiate a storage with a size
    Storage();
    Storage(int size);
    // overridding function from List
    void add_ingredient(Ingredient new_ingredient);
    void remove_ingredient(Ingredient current_ingredient);
    void print_ingredients();
    ~Storage();
};


#endif

