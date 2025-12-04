#include <iostream>
#include "warehosue.h"
#include "ShoppingCart.h"
using namespace std;




int main(){

    Warehouse soriana;
    bool end=false;
    int choice=0;
    string name;
    cout<<"Welcome to ______ store!"<<endl<<"What is your name?"<<endl;
    getline(cin,name);
    ShoppingCart cart(name);
    cout<<"Hello "<<name<<", What do you wanna do?"<<endl;
    while(!end){
        cout<<"1. See products"<<endl<<"2. Buy"<<endl<<"3. See cart"<<endl<<"4. Edit"<<endl<<"5. Pay"<<endl<<"6. Quit"<<endl;
        cin>>choice;
        switch (choice){
            case 1:
                soriana.seeProducts();
            break;

            case 2:
                soriana.buy(cart);
            break;

            case 3:
                cout<<cart.getClient()<<"'s cart:"<<endl;
                cart.showProducts();
            break;

            case 4:
                //cart.edit(soriana);
            break;

            case 5:
               // cart.pay(soriana);
            break;
            
            case 6:
                return 0;
            break;

            default:
                cout<<"It is not a valid option :("<<endl;
            break;
        }
    }

    return 0;
}