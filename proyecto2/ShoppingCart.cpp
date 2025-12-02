
#include "ShoppingCart.h"
#include "warehosue.h"
//#include "CartProduct.h"
ShoppingCart::ShoppingCart(){
    this->size=0;
}
ShoppingCart::ShoppingCart(string client){
    this->client=client;
    this->size=0;
}

// float ShoppingCart::total(){
//     float result=0;
//     for(int i=0;i<size;i++){
//         result+=products[size].getPrice();
//     }
// }

// void ShoppingCart::addProduct(WarehouseProduct product,int amount){
//     CartProduct newProduct(product.getId(),product.getName(),product.getPrice(),amount);
//     this->products[size]=newProduct;
//     size++;
// }

// int ShoppingCart::getSize(){
//     return size;
// }

// string ShoppingCart::getClient(){
//     return this->client;
// }

// void ShoppingCart::showProducts(){
//     for(int i=0;i<size;i++){
//         cout<<this->products[i].getId()<<","<<this->products[i].getName()<<","<<this->products->getPrice()<<endl;

//     }
//     cout<<"The total price is: "<<this->totalPrice()<<endl;
// }

// bool ShoppingCart::searchProduct(string id){
//     for(int i=0;i<size;i++){
//         if(products[i].getId()==id) return true;
//     }
//     return false;
// }

// float ShoppingCart::totalPrice(){
//     float sum=0.0;
//     for(int i=0;i<this->size;i++){
//         sum+=products[i].getPrice();
//     }
//     return sum;
// }

// CartProduct ShoppingCart::getProduct(string id){
//     for(int i=0;i<size;i++){
//         if(this->products[i].getId()==id){
//             return this->products[i];
//         }
//     }
    
// }

// int ShoppingCart::getProductNum(string id){
//     for(int i=0;i<size;i++){
//         if(this->products[i].getId()==id){
//             return i;
//         }
//     }
  
// }


// void ShoppingCart::edit(Warehouse& warehouse){
//     string id;
//     int choice;
//     string idw;
//     int amountw;
//     while(true){
//         cout<<"Cart products: "<<endl;
//         this->showProducts();
//         cout<<"Choose an id to edit it"<<endl;
//         getline(cin,id);
//         cout<<id<<", Is this correct?"<<endl;
//         cin>>choice;
//         if(choice==1){
//             if(this->searchProduct(id)){
//                 cout<<"Enter the new id and amount"<<endl;
//                 getline(cin,idw);
//                 cin>>amountw;
//                 if(warehouse.checkId(idw) && warehouse.checkAvailability(idw,amountw)){
//                     CartProduct newCartProduct(idw, warehouse.getProduct(idw).getName(),warehouse.getProduct(idw).getPrice(),amountw);
//                     this->products[this->getProductNum(idw)]=newCartProduct;
//                     return;
//                 }

//             }else{
//                 cout<<"It was not possible"<<endl;
//             }
//         }else if(choice==2){
//             cout<<"ok"<<endl;
//         }else{
//             cout<<"it is not a valid option"<<endl;
//         }
    
//     }
// }

// void ShoppingCart::pay(Warehouse& warehouse){

//     this->showProducts();
//     cout<<"The total price is: "<<this->totalPrice()<<endl;
//     fill(begin(this->products), end(this->products),Warehouse());
// }

ShoppingCart::~ShoppingCart(){
    
}