#include "GroceryStore.h"
#include <iostream>
using namespace std;
GroceryStore::GroceryStore(float mPrice, float bPrice){
    this->breadPrice=bPrice;
    this->milkPrice=mPrice;
    this->breadAmount=0;
    this->milkAmount=0;
}

void GroceryStore::buyMilk(int amount){

    this->milkAmount+=amount;

}

void GroceryStore::buyBread(int amount){

    this->breadAmount+=amount;

}

float GroceryStore::calculateMilkSale(){
    return this->milkAmount*this->milkPrice;
}

float GroceryStore::calculateBreadSale(){
    return this->breadAmount*this->breadPrice;
}

float GroceryStore::calculateTotalSale(){
    return this->calculateBreadSale()+this->calculateMilkSale();
}

void GroceryStore::displaySale(){
    cout<<"Milk "<<this->milkAmount<<" $"<<calculateMilkSale()<<endl;
    cout<<"Bread "<<this->breadAmount<<" $"<<calculateBreadSale()<<endl;
    cout<<"Total: $"<<calculateTotalSale()<<endl;
}