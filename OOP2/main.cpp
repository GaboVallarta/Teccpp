#include <iostream>
#include "Gatito.h"
#include <string>
using namespace std;

typedef float luis;

int main(){

    Gatito gatito1;
    string a="luis";
    Gatito gatito2(a,5);
    gatito1.printData();
    gatito2.printData();


    string nameStr,ageStr;
    cout<<"give me a name for your gatito"<<endl;
    getline(cin, nameStr);
    cout<<"give me an age for your gatito"<<endl;
    getline(cin,ageStr);

    luis age=stof(ageStr);

    Gatito gatito3(nameStr,age);
    gatito2.printData();


    return 0;

}