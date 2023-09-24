#include "User.h"

User::User() : name(""), id(0), email("") {
    mealplans = new vector<MealPlan>;
}
User::User(string name, int id, string email, vector<MealPlan>* meal_plans) {
    this->name = name; 
    this->id=id; 
    this->email = email;
    mealplans = meal_plans;
}

string User::get_name() {return name;}
void User::set_name(string new_name) {name = new_name;}

string User::get_email() {return email;}
void User::set_email(string new_email) {email = new_email;}

int User::get_id() {return id;}

void User::add_meal_plan(MealPlan new_meal_plan) {
    mealplans->push_back(new_meal_plan);
}

vector<Recipe> User::search_recipe(string name, vector<Recipe> all_recipes) {
    vector<Recipe> results;
    for (Recipe recipe : all_recipes) {
        if (recipe.get_name() == name) 
            results.push_back(recipe);
    }
    return results;
}

void User::search_ingredient(string name, vector<Ingredient> all_ingredients) {
    for (Ingredient ingredient : all_ingredients){
        if (ingredient.get_name() == name) 
            cout << "Name: " << ingredient.get_name() << ", Quantity: " << ingredient.get_quantity() << endl;
    }
}

// User::~User() {
//     delete mealplans;
// }
