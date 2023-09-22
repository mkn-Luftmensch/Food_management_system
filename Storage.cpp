#include "Storage.h"
#include "List.h"
#include "Ingredient.h"
#include "User.h"
#include <iostream>

Storage::Storage(int size):List(size) {
    available_ingredients = new Ingredient[size];
}

Storage::Storage() {

}

void Storage::add_ingredient(Ingredient new_ingredient) {
    // track if the current number of ingredients reach limits
    // add ingredients if the limit is not reached
    if (current_size < size) {
        available_ingredients[current_size] = new_ingredient; 
        current_size++;
    }
    // increase the sizer of the array if the limit is reached
    // operate this by creating a sub dynamic array to store the existing ingredients
    // create new dynamic array to store the existing and new ingredients
    else {
        Ingredient* copy_ingredients = new Ingredient[size];
        for (int i = 0; i < size; i++) {
            copy_ingredients[i] = available_ingredients[i];
        }
        delete[] available_ingredients;
        size++;
        available_ingredients = new Ingredient[size];
        for (int i = 0; i < size - 1; i++) {
            available_ingredients[i] = copy_ingredients[i];
        }
        available_ingredients[size - 1] = new_ingredient;
        current_size++;
        delete[] copy_ingredients;
    }
    std::cout << "New ingredient added to list" << std::endl;
}

void Storage::remove_ingredient(Ingredient current_ingredient) {
     for (int i = 0; i < current_size; i++) {
        if (available_ingredients[i].get_name() == current_ingredient.get_name()) {
            for (int j = i; j < current_size - 1; j++) {
                available_ingredients[j] = available_ingredients[j + 1];
                std::cout << "The ingredient has been removed!" << std::endl;
            }
        }
     }
}

void Storage::print_ingredients() {
     for (int i = 0; i < current_size; i++) {
        std::cout << available_ingredients[i].get_name() << std::endl;
        std::cout << available_ingredients[i].get_quantity() <<std::endl;
     }
}
 
Storage::~Storage() {
    delete[] available_ingredients;
}

