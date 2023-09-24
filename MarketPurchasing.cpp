#include "MarketPurchasing.h"
#include "List.h"
#include "Ingredient.h"
#include "ShoppingList.h"
#include <vector>
#include <string>
#include <iostream>

MarketPurchasing::MarketPurchasing() {

}

void MarketPurchasing::buy_ingredients() {
    for (int i = 0; i < stall_names.size(); i++) {
        std::cout << stall_names[i] << std::endl;
        std::cout << stall_phones[i] << std::endl;
        std::cout << stall_locations[i] << std::endl;
    } 
}

void MarketPurchasing::add_stall(string stall_name, string stall_phone, string stall_location) {
    stall_names.push_back(stall_name);
    stall_phones.push_back(stall_phone);
    stall_locations.push_back(stall_location);
    std::cout << "a new stall has been added!" << std::endl;
}

void MarketPurchasing::remove_stall(string stall_name) {
    for (int i = 0; i < stall_names.size(); i++) {
        // trach stalls based on names. 
        if (stall_names[i] == stall_name) {
            // remove all information about the deleted stall
            stall_names.erase(stall_names.begin() + i);
            stall_phones.erase(stall_phones.begin() + i);
            stall_locations.erase(stall_locations.begin() + i);
            std::cout << "The stall has been removed" << std::endl;
        }
    }
}