#include "aritCal.h"

int AritmeticCalculator::add(int a, int b){
    int c=a+b;
    if(c> this->maxNumber){
        this->maxNumber=c;
    }
    if(c<this->minNumber){
        this->minNumber=c;
    }
    return c;
}

int AritmeticCalculator::sub(int a, int b){
    int c=a-b;
    if(c> this->maxNumber){
        this->maxNumber=c;
    }
    if(c<this->minNumber){
        this->minNumber=c;
    }
    return c;
}
