#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){

    ifstream file("productos.txt");

    if(!file.is_open()){
        cout<<"File can not be opened"<<endl;
        return 1;
    }
    string line;
    //lee todas las líneas hata que se quede sin lineas
    while(getline(file, line)){
        cout<<line<<endl;
        string idStr, nameStr, priceStr, amountStr;

        stringstream stream(line);

        
        getline(stream, idStr, ',');
        getline(stream, nameStr, ',');
        getline(stream, priceStr, ',');
        getline(stream, amountStr, ',');

        cout<<"LINE BRAK DOWN: "<<idStr<< "|"<<nameStr<<"|"<<priceStr<<"|"<<amountStr<<endl;

        float price=stof(priceStr);
        int amount=stoi(amountStr);

    }

    file.close();

    return 0;
}