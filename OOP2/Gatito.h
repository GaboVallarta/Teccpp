#pragma once
#include <string>
using namespace std;
class Gatito{

    private:
        string name;
        float age;
    public:
        Gatito();
        Gatito(string& name, float age);


        //Destructor
        ~Gatito();
        
        void printData();
        
};