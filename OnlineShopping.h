#ifndef ONLINESHOPPING_H
#define ONLINESHOPPING_H
#include "List.h"
#include "Ingredient.h"
#include "ShoppingList.h"
#include <string>
#include <vector>

class OnlineShopping : public ShoppingList {
    private: 
    // declare an array of items purchased online
    Ingredient* online_purchase_ingredients;
    std::vector<std::string> website_names;
    std::vector<std::string> links;
    public:
    OnlineShopping();
    // constructor initialize the size of the online_purchase_ingredients
    OnlineShopping(int size);
    // overidding function add ingredients to the online_purchase_ingredients
    void add_ingredient(Ingredient new_ingredient);
    // overidding function remove ingredients from the online_purchase_ingredients
    void remove_ingredient(Ingredient current_ingredient);
    // show all the ingredients in the lists
    void print_ingredients();
    // printout all the websites to purchase online
    void buy_ingredients();
    // add new website to the vectors of websites
    void add_link(std::string website_name, std::string new_link);
    // remove websites
    void remove_link(std::string website_name);
    ~OnlineShopping();
};

#endif
