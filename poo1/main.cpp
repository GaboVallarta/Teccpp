#include <iostream>
#include "Perrito.h"
using namespace std;

int main(){
    /*
        classes are the abstract definition
        the counterpart is called an object
        a specific instance of a class

    */

    Perrito solovino;
    Perrito firulais;
    Perrito elMilaneso;


    //each object has its own copy o f the atributes and behaviors in the class
    solovino.nombre="solovino";
    solovino.numeroDepATAS=4;
    solovino.ladrar();
    solovino.comer();
    
    int suma=solovino.add(3,2);
    cout<<suma<<endl;

    return 0;
}