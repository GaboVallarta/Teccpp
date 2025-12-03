#include "CartProduct.h"

CartProduct::CartProduct(string id, string name, float price, int amount){
    this->id=id;
    this->name=name;
    this->price=price;
    this->amount=amount;
}
CartProduct::CartProduct(){
    this->id="Null";
    this->name="Default";
    this->price=0.0;
    this->amount=0;
}
string CartProduct::getId(){
    return this->id;
}
string CartProduct::getName(){
    return this->name;
}
float CartProduct::getPrice(){
    return this->price;
}
int CartProduct::getAmount(){
    return this->amount;
}

// float CartProduct::subtotal(){
//     float sum=0;
//     for(int i=0;i<this->amount;i++){

//     }
// }


CartProduct::~CartProduct(){
    
}