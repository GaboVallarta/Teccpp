#pragma once
#include <string>
#include "WarehouseProduct.h"
#include "ShoppingCart.h"
using namespace std;

class ShoppingCart;

class Warehouse{
    private:
    int size;
    public:
    WarehouseProduct products[20];
    Warehouse();
    ~Warehouse();
    void setSize();
    void seeProducts();
    void buy(ShoppingCart& cart);
    bool checkId(string id);
    bool checkAvailability(string id,int num);
    WarehouseProduct getProduct(string id);
};