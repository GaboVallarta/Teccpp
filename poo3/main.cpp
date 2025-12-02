#include <iostream>
#include "Movie.h"
#include "Screen.h"
#include "Tickets.h"

using namespace std;
/*
Main method:
Create a Movie object using the non-default constructor
Create a Screen object using the non-default constructor
Write a loop menu with the following options (print options and act accordingly):
1 Show movie info - Invoke the displayInfo method in your movie object
2 Show screen info - Invoke the displayInfo method in your screen object
3 Buy ticket - if the user chooses to buy a new ticket code the following behavior:
Check if your screen still has available spaces, if not simply print a message and resume the main menu loop
If you have space, ask the user for a ticket price and type and create a new Ticket object with this info.
Invoke the occupySeat method on your screen.
Invoke the displayInfo method on your newly created
4 Exit - break loop (use your loop’s condition for this!)
Any other number must be ignored.*/

void createTicket(float price, string type,Movie& movie, Screen& screen){
    Tickets ticket(price,type);
    screen.occupySeat();
    screen.displayInfo();
    return;
}


int main(){
    string name="Terminator";
    Movie movie(name,100);
    Screen screen(5,2);
    int choice=0;
    bool exit=false;
    string type;
    int price=0;
    while(!exit){
        cout<<"Hi, what do you wanna do?"<<endl;
        cout<<"1. Show movie info"<<endl<<"2.Show screen info"<<endl<<"3.Buy ticket"<<endl<<"4.Exit"<<endl;
        
        cin>>choice;
        switch(choice){
            case 1:
                movie.displayInfo();
                break;
            case 2:
                screen.displayInfo();
                break;
            case 3:
                if(screen.checkAvailability()){
                    cout<<"What is the ticket price?"<<endl;
                    cin>>price;
                    cout<<"What is the type?"<<endl;
                    cin>>type;
                    createTicket(price, type, movie, screen);
                }else{
                    cout<<"It does not has available spaces"<<endl;
                }
                break;
                
            case 4:
                exit=true;
                break;
            default:
                cout<<"It is not a valid choice"<<endl;
                break;
        }
    }
    return 0;
}