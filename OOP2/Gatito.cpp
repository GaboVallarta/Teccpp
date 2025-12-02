#include "Gatito.h"
#include <iostream>
Gatito::Gatito(){
    name="Default";
    age=0;
    cout<<"Default constructor"<<endl;
}


Gatito::Gatito(string& name, float age){
    this->age=age;
    this->name=name;
    cout<<"Non default constructor"<<endl;
}

Gatito::~Gatito(){
    cout<<"Se murio "<<this->name<<endl;
}

void Gatito::printData(){
    cout<< name << ", "<< age<<endl;
}