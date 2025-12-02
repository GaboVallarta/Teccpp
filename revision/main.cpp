#include <iostream>
#include "GroceryStore.h"
using namespace std;



int main(){
    GroceryStore tiendita(10.5,15.7);
    int amount=0;
    bool end=false;
    int choice;
    while(!end){
        cout<<"What do you want to do?"<<endl
        <<"1. Buy milk"<<endl
        <<"2. Buy bread"
        <<endl<<"3. Display milk total"
        <<endl<<"4. Display bread total"
        <<endl<<"5. Display sale total"
        <<endl<<"6. exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"How much milk do you want?"<<endl;
            cin>>amount;
            tiendita.buyMilk(amount);
            amount=0;
            break;
        case 2:
            cout<<"How much bread do you want?"<<endl;
            cin>>amount;
            tiendita.buyBread(amount);
            amount=0;
            break;
        case 3:
            cout<<"The total for the milk is : $"<<tiendita.calculateMilkSale()<<endl;
            break;
        case 4:
            cout<<"The total for the bread is : $"<<tiendita.calculateBreadSale()<<endl;
            break;
        case 5: 
            tiendita.displaySale();
            break;
        case 6:
            end=true;
            break;
        default:
            cout<<"No es opcion valida"<<endl;
            
            break;
        }
    }
    return 0;
}