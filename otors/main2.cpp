#include <iostream>
#include <string>
using namespace std;

int main(){

    int someNumber=0;
    cout<<"give me a number"<<endl;
    cin>>someNumber;
    //getline(cin,someNumber);
    cout<<"give me a string"<<endl;
    string someString;
    getline(cin,someString);

    cout<<someNumber<<","<<someString<<endl;


    return 0;

    // g++ *.cpp -o nameoffile
    // ./nameoffile
}