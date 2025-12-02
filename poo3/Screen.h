#pragma once
/*
Code the Screen class. It must have the following members:
Attributes (must be private):
screenNumber - numeric value
maxOccupancy - maximum amount of people in the room
currentOccupancy - how many people are currently in the room
Behaviors:
Default constructor - initializes attributes with default values chosen by yourself.
Non-default constructor - constructor that initializes the attributes with the arguments received (define the appropriate parameters).
bool checkAvailability - returns false if the currentOccupancy is equals to  the maxOccupancy, returns true otherwise.
void occupySeat - add 1 to the currentOccupancy
void displayInfo - print the info of the attributes of the object
*/

class Screen{
    private:
        int screenNumber;
        int maxOccupancy;
        int currentOcupancy;
    public:
        Screen();
        Screen(int sN, int mO);
        bool checkAvailability();
        void occupySeat();
        void displayInfo();
};