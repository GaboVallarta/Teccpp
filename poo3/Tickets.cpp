#include "Tickets.h"
#include <iostream>

Tickets::Tickets(){
    this->price=0;
    this->type="Default";
}

Tickets::Tickets(float price, string& type){
    this->price=0;
    this->type=type;
}

void Tickets::displayInfo(){
    cout<<"Price: "<<this->price<<endl<<"Type: "<<this->type<<endl;
}