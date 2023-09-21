#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <string>
#include <ctime>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Ingredient{
    private:
        string name;
        int quantity;
        time_t expiration_date;
    public:
        Ingredient();
        Ingredient(string name, int quantity, time_t expiration_date);
        int get_quantity();
        void set_quantity(int quantity);
        string get_name();
        string* get_potential_dishes();
        bool is_expired();
};

#endif