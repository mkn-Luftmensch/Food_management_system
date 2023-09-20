#include "List.h"
#include "Ingredient.h"
#include <iostream>
List::List(int size) :size(size) {
    current_size = 0;
    require_ingredients = new Ingredient[size];
}

List::List() {

}

void List::add_ingredient(Ingredient new_ingredient) {
    if (current_size < size) {
        require_ingredients[current_size] = new_ingredient;
        current_size++;
        std::cout << "New ingredient added to list" << std::endl;
    }
    else {
        std::cout << "The list is full" << std::endl;
    }
}

void List::remove_ingredient(Ingredient new_ingredient) {
     
}

List::~List() {
    delete[] require_ingredients;
}