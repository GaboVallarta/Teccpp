#include <bits/stdc++.h>
using namespace std;

void hola();
void adios(){
    hola();
    cout<<"adios"<<endl;
}

void hola(){
    cout<<"hola"<<endl;
}

int main(){
    //++i antes, i++ despues
   // int i-=-1
    int edad = 18;
    string mensaje = (edad >= 18) ? "Eres mayor de edad" : "Eres menor de edad";
    cout << mensaje<<endl;
    
    adios();

    return 0;
}