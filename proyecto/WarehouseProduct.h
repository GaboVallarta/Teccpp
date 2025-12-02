#pragma once
#include <string>
using namespace std;

class WarehouseProduct{
    private:
        string id;
        string name;
        float price;
        int stock;
    public:
        WarehouseProduct();
        WarehouseProduct(string id, string name, float price, int stock);
        ~WarehouseProduct();
        float getPrice();
        string getName();
        string getId();
        float getStock();
        
        
};