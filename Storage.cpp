#include "Storage.h"
#include "List.h"
#include "Ingredient.h"
#include <iostream>

Storage::Storage(int size):List(size) {
    current_size = 0;
    available_ingredients = new Ingredient[size];
}

Storage::Storage() {

}

void Storage::add_ingredient(Ingredient new_ingredient) {
    bool found = false;
    for (int i = 0; i < current_size; i++) {
            if (new_ingredient.get_name() == available_ingredients[i].get_name()) {
                available_ingredients[i].set_quantity(available_ingredients[i].get_quantity() + new_ingredient.get_quantity());
                break;
                found = true;
        }
    }
    if (found == false) {
    if (current_size < size) {
        available_ingredients[current_size] = new_ingredient; 
        current_size++;
        std::cout << "New ingredient added to list" << std::endl;
    }
    else {
        std::cout << "The list is full" << std::endl;
    }
    }
}

void Storage::remove_ingredient(Ingredient current_ingredient) {
     for (int i = 0; i < current_size; i++) {
        if (available_ingredients[i].get_name() == current_ingredient.get_name()) {
            for (int j = i; j < current_size - 1; j++) {
                available_ingredients[j] = available_ingredients[j + 1];
            }
        }
     }
}

Storage::~Storage() {
    delete[] available_ingredients;
}

