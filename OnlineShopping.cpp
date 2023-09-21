#include "List.h"
#include "Ingredient.h"
#include "ShoppingList.h"
#include "OnlineShopping.h"
#include <iostream>
#include <vector>
#include <string>

OnlineShopping::OnlineShopping(int size):ShoppingList(size) {
    online_purchase_ingredients = new Ingredient[size];
}

OnlineShopping::OnlineShopping() {

}

void OnlineShopping::add_ingredient(Ingredient new_ingredient) {
    // track if the current number of ingredients reach limits
    // add ingredients if the limit is not reached
    if (current_size < size) {
        online_purchase_ingredients[current_size] = new_ingredient; 
        current_size++;
    }
    // increase the sizer of the array if the limit is reached
    // operate this by creating a sub dynamic array to store the existing ingredients
    // create new dynamic array to store the existing and new ingredients
    else {
        Ingredient* copy_ingredients = new Ingredient[size];
        for (int i = 0; i < size; i++) {
            copy_ingredients[i] = online_purchase_ingredients[i];
        }
        delete[] online_purchase_ingredients;
        size++;
        Ingredient* online_purchase_ingredients = new Ingredient[size];
        for (int i = 0; i < size - 1; i++) {
            online_purchase_ingredients[i] = copy_ingredients[i];
        }
        online_purchase_ingredients[size - 1] = new_ingredient;
        current_size++;
        delete[] copy_ingredients;
    }
    std::cout << "New ingredient added to list" << std::endl;
}

void OnlineShopping::remove_ingredient(Ingredient current_ingredient) {
     for (int i = 0; i < current_size; i++) {
        if (online_purchase_ingredients[i].get_name() == current_ingredient.get_name()) {
            for (int j = i; j < current_size - 1; j++) {
                online_purchase_ingredients[j] = online_purchase_ingredients[j + 1];
            }
            std::cout << "The ingredient has been removed!" << std::endl;
        }
     }
}

void OnlineShopping::print_ingredients() {
     for (int i = 0; i < current_size; i++) {
        std::cout << i << ". ";
        std::cout << online_purchase_ingredients[i].get_name();
        std::cout << online_purchase_ingredients[i].get_quantity();
     }
}

void OnlineShopping::buy_ingredients() {
    for (int i = 0; i < links.size(); i++) {
        std::cout << website_names[i] << std::endl;
        std::cout << links[i] << std::endl;
    }
}

void OnlineShopping::add_link(std::string new_website, std::string new_link) {
    website_names.push_back(new_website);
    links.push_back(new_link);
    std::cout << "new link has been added!" << std::endl;
}

void OnlineShopping::remove_link(std::string old_website) {
    for (int i = 0; i < website_names.size(); i++) {
        if (website_names[i] == old_website) {
            website_names.erase(website_names.begin() + i);
            links.erase(links.begin() + i);
            std::cout << "The link has been removed!" << std::endl;
        }
    }
}

OnlineShopping::~OnlineShopping() {
    delete[] online_purchase_ingredients;
    links.clear();
}




