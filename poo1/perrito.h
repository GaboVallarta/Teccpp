#pragma once
#include <iostream>
#include <string>
using namespace std;
class Perrito{

    public:
        string nombre;
        string raza;
        int edad;
        int numeroDepATAS;

        void ladrar();
        void comer();
        int add(int a, int b);
};