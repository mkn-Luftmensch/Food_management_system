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
        string information;
    public:
        Ingredient();
        Ingredient(string name, int quantity, string information);

        int get_quantity();
        void set_quantity(int quantity);
        
        string get_name();
        string* get_potential_dishes();
        
        bool is_expired();

        void show_information();
};

#endif