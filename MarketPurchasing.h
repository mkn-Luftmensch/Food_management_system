#ifndef MARKETPURCHASING_H
#define MARKETPURCHASING_H
#include "List.h"
#include "Ingredient.h"
#include "ShoppingList.h"
#include <vector>
#include <string>

class MarketPurchasing : public ShoppingList {
    private:
    // store stall information
    vector<std::string> stall_names;
    vector<std::string> stall_phones;
    vector<std::string> stall_locations;
    public:
    MarketPurchasing();
    // print out stalls' information
    void buy_ingredients();
    // add new stall 
    void add_stall(string stall_name, string stall_phone, string stall_location);
    // remove stall
    void remove_stall(string stall_name);
};


#endif