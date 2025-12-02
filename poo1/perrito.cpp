#include <iostream>
#include "Perrito.h"

void Perrito::ladrar(){
    cout<<"WOF."<<this->nombre<<endl;
}
void Perrito::comer(){
    cout<<"NOM NOM NOM"<<numeroDepATAS<<endl;
}
int Perrito::add(int a, int b){
    int result=a+b;
    return result;
}