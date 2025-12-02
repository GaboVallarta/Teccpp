#include "warehosue.h"
#include <iostream>
using namespace std;

Warehouse::Warehouse(){
    this->size=0;
}

void Warehouse::seeProducts(){
    
    for (int i=0;i<size;i++){
        cout<<this->products[i].getId()<<","<<this->products[i].getName()<<","<<this->products[i].getPrice()<<","<<this->products[i].getStock()<<endl;
    }
}
void Warehouse::setSize(){
    this->size++;
}

bool Warehouse::checkId(string id){
    for(int i=0;i<this->size;i++){
        if(this->products[i].getId()==id){
            return true;
        }
    }
    return false;
}



bool Warehouse::checkAvailability(string id,int num){
    if(this->getProduct(id).getStock()>=num){
        return true;
    }
    return false;
}

WarehouseProduct Warehouse::getProduct(string id){
    for(int i=0;i<this->size;i++){
        if(this->products[i].getId()==id){
            return this->products[i];
        }
    }
}

void Warehouse::buy(ShoppingCart& shoppingCart){
    string choice;
    int num;
    int confirmation;
    cout<<"Which product do you want? (Enter the id)"<<endl;
    this->seeProducts();
    getline(cin,choice);
    while(true){
    if(this->checkId(choice)){
        cout<<"Product was found, how mucho do you want to buy?"<<endl;
        cin>>num;
        if(this->checkAvailability(choice,num)){
            if(shoppingCart.getSize()<20){
                cout<<num<<" "<<this->getProduct(choice).getName()<<"(s), is this correct?"<<endl<<"1. yes"<<endl<<"2. no"<<endl;
                cin>>confirmation;
                if(confirmation==1){
                    shoppingCart.addProduct(this->getProduct(choice),num);
                    return;
                }else if(confirmation==2){
                    //regresa
                }else{
                    cout<<"It is not a valid answere"<<endl;
                }
            }else{
                cout<<"There is not enough space on your cart"<<endl;
                //regresa
            }

        }else{
            cout<<"There is not enought stock, choose another value"<<endl;
            //regresa
        }
        

    }else{
        cout<<"Product was not found :("<<endl;
        //regresa
    }
   }

}



Warehouse::~Warehouse(){
    
}
