#include "Screen.h"
#include <iostream>
#include <string>
using namespace std;
Screen::Screen(){
    this->maxOccupancy=0;
    this->screenNumber=0;
    this->currentOcupancy=0;
}

Screen::Screen(int sN, int mO){
    this->maxOccupancy=mO;
    this->screenNumber=sN;
    this->currentOcupancy=0;
}
bool Screen::checkAvailability(){
    if (this->currentOcupancy==this->maxOccupancy){
        return false;
    }else{
        return true;
    }
}
void Screen::occupySeat(){
    if(this->checkAvailability()){
        currentOcupancy+=1;
    }
}
void Screen::displayInfo(){
    cout<<"Max occupancy: "<<this->maxOccupancy<<endl<<"Screen number: "<<this->screenNumber<<endl<<"Current ocupancy: "<<this->currentOcupancy<<endl;
}