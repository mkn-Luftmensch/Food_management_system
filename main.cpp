#include "Ingredient.h"
#include "List.h"
#include "ShoppingList.h"
#include "Storage.h"
#include "OnlineShopping.h"
#include "MarketPurchasing.h"
#include "User.h"
#include "MealPlan.h"
#include "Recipe.h"
#include <iostream>

int main() {
    // TEST LIST
    // ShoppingList list1(2);
    // Ingredient carrot("carrot", 2, 0);
    // list1.add_ingredient(carrot);
    // list1.print_ingredients();
    // Ingredient egg("egg", 3, 0);
    // list1.add_ingredient(egg);
    // list1.print_ingredients();
    // Ingredient fish("fish", 3, 0);
    // list1.add_ingredient(fish);
    // list1.print_ingredients();


    // TEST COOKING HANDBOOK
    // COOK SPAGHETTI
    Ingredient beef("beef", 1, 0);
    Ingredient olive_oil("olive oil", 3, 0);
    Ingredient onion("onion", 1, 0);
    Ingredient garlic("garlic", 3, 0);
    Ingredient tomato("tomato", 2, 0);
    Ingredient oregano("oregano", 1, 0);
    Ingredient pepper("pepper", 1, 0);
    Ingredient basil("basil", 4, 0);
    Ingredient spaghetti("spaghetti", 12, 0);
    Ingredient cheese("cheese", 100, 0);

    vector<Ingredient> meet_spaghetti = {beef, olive_oil, onion, garlic, tomato, oregano, pepper, basil, spaghetti};
    Recipe MeetSpaghetti("meet spaghetti", &meet_spaghetti, "lười lắm đéo hướng dẫn nấu đâu");
    cout << MeetSpaghetti.get_instruction() << endl;
    MeetSpaghetti.print_all_ingredients();
    MeetSpaghetti.add_ingredient(cheese);
    MeetSpaghetti.print_all_ingredients();
    MeetSpaghetti.remove_ingredient("pepper");
    MeetSpaghetti.print_all_ingredients();

    vector<Recipe> plan = {MeetSpaghetti};
    MealPlan meal_plan("cut", &plan);
    vector<MealPlan> all_plans = {meal_plan};
    User ngu("ngu", 69, "ngungu6969gmail.com", &all_plans);
    ngu.search_ingredient("oregano", meet_spaghetti);

    return 0;
}