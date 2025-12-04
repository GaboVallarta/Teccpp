#pragma once
//#include "warehosue.h" Conmo es recursivo, solo le pongo la referencia
#include "CartProduct.h"
#include "WarehouseProduct.h"
#include <iostream>
using namespace std;


class Warehouse; //referencia

class ShoppingCart{

    private:
    string client;
    CartProduct products[10];
    int size;
    float total();
    
    public:
    ShoppingCart();
    ShoppingCart(string client);
    ~ShoppingCart();
    int getSize();
    string getClient();
    void addProduct(WarehouseProduct product, int amount);
    void showProducts();
    float totalPrice();
    void edit(Warehouse& warehouse);
    bool searchProduct(string id);
    CartProduct getProduct(string id);
    int getProductNum(string id);
    void pay(Warehouse& warehouse);
};