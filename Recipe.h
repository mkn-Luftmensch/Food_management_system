#ifndef RECIPE_H
#define RECIPE_H
#include "Ingredient.h"
class Recipe{
    private:
        string name;
        vector<Ingredient>* ingredients;
        string intruction;
    public: 
        Recipe();
        Recipe(string name, vector<Ingredient>* ingredients, string instruction);
        string get_instruction();
        string get_name();
        void add_ingredient(Ingredient new_ingredient);
        void remove_ingredient(string ingredient_name);
        
};

#endif