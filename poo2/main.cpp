#include <iostream>
#include "aritCal.h"
#include "unitCal.h"
using namespace std;

int main(){

    AritmeticCalculator calcu;
    calcu.maxNumber=0;
    calcu.minNumber=0;

    UnitCalculator unit;
    unit.transform=1.6;

    cout<<"Puedes darme dos numero porfa?"<<endl;
    float x;
    int y;
    cin>>x>>y;
    cout<<endl<< "La suma de ambos numeros es "<< calcu.add(x,y) <<endl<<endl;
    cout<<"Puedes darme dos numero porfa?"<<endl;
    cin>>x>>y;
    cout<<endl<< "La resta de ambos numeros es "<< calcu.sub(x,y) <<endl<<endl;
    cout<<"El numero maximo es : "<<calcu.maxNumber<<" y el minimo: "<<calcu.minNumber<<endl;

    cout<<"Dame un valor para la milla: "<<endl;
    cin>>x;
    cout<<endl<<"Al transformarlo a kilometros da: "<<unit.milesToM(x)<<endl<<endl;

    cout<<"Dame un valor para los kilometros: "<<endl;
    cin>>x;
    cout<<endl<<"Al transformarlo a millass da: "<<unit.MetersToM(x)<<endl;
    



    return 0;
}