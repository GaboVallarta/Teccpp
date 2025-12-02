#include "WarehouseProduct.h"

WarehouseProduct::WarehouseProduct(){
    this->id="Null";
    this->name="Default";
    this->price=0.0;
    this->stock=0;
}
WarehouseProduct::WarehouseProduct(string id, string name, float price, int stock){
    this->id=id;
    this->name=name;
    this->price=price;
    this->stock=stock;
}
float WarehouseProduct::getPrice(){
    return this->price;
}
string WarehouseProduct::getName(){
    return this->name;
}
float WarehouseProduct::getStock(){
    return this->stock;
}
string WarehouseProduct::getId(){
    return this->id;
}

WarehouseProduct::~WarehouseProduct(){
    
}