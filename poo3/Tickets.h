#pragma once
#include <string>
using namespace std;
/*Code the Ticket class. It must have the following members:
Attributes (must be private):
price - numeric value
type - string that represents the ticket type - adult, senior, child
Behaviors:
Default constructor - initializes attributes with default values chosen by yourself.
Non-default constructor - constructor that initializes the attributes with the arguments received (define the appropriate parameters).
void displayInfo - print the info of the attributes of the object*/
class Tickets{
    private:
        float price;
        string type;
    public:
        Tickets();
        Tickets(float price, string& type);
        void displayInfo();

};