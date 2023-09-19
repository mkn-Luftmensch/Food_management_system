#include "Recipe.h"

Recipe::Recipe() {
    this->name="";
    this->intruction="";
    this->ingredients = {};
}

Recipe::Recipe(string name, vector<Ingredient>* ingredients, string instruction){
    this->name=name;
    this->ingredients = ingredients;
    this->intruction = instruction;
}

string Recipe::get_instruction(){
    return this->intruction;
}

void Recipe::add_ingredient(Ingredient new_ingredient) {
    ingredients->push_back(new_ingredient);
}


void Recipe::remove_ingredient(string ingredient_name) {
    auto it = ingredients->begin();
    while (it != ingredients->end()) {
        if (it->get_name() == ingredient_name) it = ingredients->erase(it);
        else ++it;
    }
}