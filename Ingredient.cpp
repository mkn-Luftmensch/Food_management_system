#include "Ingredient.h"

Ingredient::Ingredient() : name(""), quantity(0), information("") {}

Ingredient::Ingredient(string name, int quantity, string information){
    this->name = name;
    this->quantity = quantity;
    this->information = information;
    // this->expiration_date = expiration_date;
}

int Ingredient::get_quantity(){return quantity;}
void Ingredient::set_quantity(int quantity){
    this->quantity=quantity;
    cout << "Success";
}

string Ingredient::get_name() {return name;}

string* Ingredient::get_potential_dishes(){return nullptr;}

bool Ingredient::is_expired() {return false;}

void Ingredient::show_information() {
    cout << information << endl;
}