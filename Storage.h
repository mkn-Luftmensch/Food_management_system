#ifndef STORAGE_H
#define STORAGE_H
#include "List.h"
#include "Ingredient.h"

class Storage : public List {
    private:
    Ingredient* available_ingredients;
    public:
    Storage();
    Storage(int size);
    void add_ingredient(Ingredient new_ingredient);
    void remove_ingredient(Ingredient current_ingredient);
    ~Storage();
};


#endif

