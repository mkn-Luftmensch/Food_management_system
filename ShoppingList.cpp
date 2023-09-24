#include "ShoppingList.h"
#include "List.h"
#include "Ingredient.h"
#include "User.h"

ShoppingList::ShoppingList(int size):List(size) {
    unavailable_ingredients = new Ingredient[size];
}

ShoppingList::ShoppingList() {

}

void ShoppingList::add_ingredient(Ingredient new_ingredient) {
    // track if the current number of ingredients reach limits
    // add ingredients if the limit is not reached
    if (current_size < size) {
        unavailable_ingredients[current_size] = new_ingredient; 
        current_size++;
    }
    // increase the sizer of the array if the limit is reached
    // operate this by creating a sub dynamic array to store the existing ingredients
    // create new dynamic array to copy the existing and store new ingredients
    else {
        Ingredient* copy_ingredients = new Ingredient[current_size];
        for (int i = 0; i < size; i++) {
            copy_ingredients[i] = unavailable_ingredients[i];
        }
        delete[] unavailable_ingredients;
        size++;
        unavailable_ingredients = new Ingredient[size];
        for (int i = 0; i < size - 1; i++) {
            unavailable_ingredients[i] = copy_ingredients[i];
        }
        unavailable_ingredients[size - 1] = new_ingredient;
        current_size++;
        delete[] copy_ingredients;
    }
    std::cout << "New ingredient added to list" << std::endl;
}

void ShoppingList::remove_ingredient(Ingredient current_ingredient) {
     for (int i = 0; i < current_size; i++) {
        if (unavailable_ingredients[i].get_name() == current_ingredient.get_name()) {
            for (int j = i; j < current_size - 1; j++) {
                unavailable_ingredients[j] = unavailable_ingredients[j + 1];
            }
            std::cout << "The ingredient has been removed!" << std::endl;
        }
     }
}

void ShoppingList::print_ingredients() {
     for (int i = 0; i < current_size; i++) {
        std::cout << unavailable_ingredients[i].get_name() << ":";
        std::cout << unavailable_ingredients[i].get_quantity() << " ";
     }
     cout << endl;
}

void ShoppingList::buy_ingredients() {
    
}

ShoppingList::~ShoppingList() {
    delete[] unavailable_ingredients;
}


