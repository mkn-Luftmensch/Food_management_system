#ifndef MEALPLAN_H
#define MEALPLAN_H
#include "Recipe.h"

class MealPlan {
    private:
        string title;
        vector<Recipe>* recipes;
    public:
        MealPlan();
        MealPlan(string title, vector<Recipe>* recipes);
        vector<Recipe>* get_meal_plan();
        void add_recipe(Recipe new_recipe);
        void remove_recipe(string recipe_name);
        string get_title();
        void set_title(string new_title);


};

#endif