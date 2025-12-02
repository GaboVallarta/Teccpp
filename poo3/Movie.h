#pragma once
#include <string>
using namespace std;
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

class Movie{
    private:
       string name;
       float length;
       public:
       Movie();
       Movie(string& name, float lenght);
       void displayInfo();

};