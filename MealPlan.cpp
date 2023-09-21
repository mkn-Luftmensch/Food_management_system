#include "MealPlan.h"

MealPlan::MealPlan() : title("") {
    recipes = new vector<Recipe>;
}

MealPlan::MealPlan(string title, vector<Recipe>* recipes) {
    this->title = title;
    this->recipes = recipes;
}

vector<Recipe>* MealPlan::get_meal_plan() {
    return recipes;
}

void MealPlan::add_recipe(Recipe new_recipe) {
    this->recipes->push_back(new_recipe);
    cout << "successfully added new recipe";
}

void MealPlan::remove_recipe(string recipe_name) {
    auto it = recipes->begin();
    while (it != recipes->end()) {
        if (it->get_name() == recipe_name) it = recipes->erase(it);
        else ++it;
    }
}

string MealPlan::get_title() {
    return title;
}

void MealPlan::set_title(string new_title) {
    title = new_title;
}