#include "Ingredient.h"

Ingredient::Ingredient() {
    this->name="";
    this->quantity=0;
    this->expiration_date=0;
}

Ingredient::Ingredient(string name, int quantity, time_t expiration_date){
    this->name = name;
    this->quantity = quantity;
    this->expiration_date = expiration_date;
}

int Ingredient::get_quantity(){return quantity;}
void Ingredient::set_quantity(int quantity){
    this->quantity=quantity;
    cout << "Success";
}

string Ingredient::get_name() {return name;}

string* Ingredient::get_potential_dishes(){return nullptr;}
