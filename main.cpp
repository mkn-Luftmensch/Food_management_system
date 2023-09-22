#include "Ingredient.h"
#include "List.h"
#include "ShoppingList.h"
#include "Storage.h"
#include "OnlineShopping.h"
#include "MarketPurchasing.h"
#include <iostream>

int main() {
    ShoppingList list1(2);
    Ingredient carrot("carrot", 2, 0);
    list1.add_ingredient(carrot);
    list1.print_ingredients();
    Ingredient egg("egg", 3, 0);
    list1.add_ingredient(egg);
    list1.print_ingredients();
    Ingredient fish("fish", 3, 0);
    list1.add_ingredient(fish);
    list1.print_ingredients();
    return 0;
}