#ifndef USER_H
#define USER_H
#include "MealPlan.h"
#include "ShoppingList.h"
#include "Storage.h"

class User {
    private:
        string name;
        int id;
        string email;
        vector<MealPlan>* mealplans;
    public:
        User();
        User(string name, int id, string email, vector<MealPlan>* meal_plans);

        string get_name();
        void set_name(string new_name);

        string get_email();
        void set_email(string new_email);

        int get_id();

        void add_meal_plan(MealPlan new_meal_plan);
        vector<Recipe> search_recipe(string name, vector<Recipe> all_recipes);
        void search_ingredient(string name, vector<Ingredient> all_ingredients);

        // ~User();


};


#endif