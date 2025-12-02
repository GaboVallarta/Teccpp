#include "Movie.h"
#include <iostream>
/*
Code the Movie class. It must have the following members:
Attributes (must be private):
name - text value
length - amount of minutes, numeric value
Behaviors:
Default constructor - initializes attributes with default values chosen by yourself.
Non-default constructor - constructor that initializes the attributes with the arguments received (define the appropriate parameters).
void displayInfo - print the info of the attributes of the object

*/

Movie::Movie(){
    this->name="Default name";
    this->length=00.00;
}
Movie::Movie(string& name, float lenght){
    this->name=name;
    this->length=lenght;
}
void Movie::displayInfo(){
    cout<<"Name: "<<this->name<<endl<<"Lenght: "<<this->length<<endl;
}