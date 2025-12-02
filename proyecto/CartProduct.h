#pragma once
#include "warehosue.h"

class CartProduct{
    private:
    string id;
    string name;
    float price;
    int amount;
    public:
    CartProduct(string id, string name, float price, int amount);
    CartProduct();
    float subtotal();
    ~CartProduct();

    string getId();
    string getName();
    float getPrice();
    int getAmount();
    
};