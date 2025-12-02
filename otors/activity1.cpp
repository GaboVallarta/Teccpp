#include <iostream>
#include <string>
using namespace std;

void problemaUno(){
    cout<<"hello world"<<endl;
}

void problemaDos(){
    int n1=5;
    float n2=5.7;
    double sum=n1+n2;
    cout<<sum<<endl;
}

float rectangleArea(float base, float height){
    float area=base*height;
    return area;
}

void problemaTres(){
    float result=rectangleArea(2.5,2);
    cout<<result<<endl;
}

void problemaCuatro(){
    string myName;
    cout<<"What is your name?"<<endl;
    cin>>myName;
    cout<<"Hi "<<myName<<", welcome to the world of C++"<<endl;
}

// void problemaCinco(){
//     int num1=0;
//     int num2=0;
//     cout<<"Write the values of the two numbers"<<endl;
//     cin>>num1>>num2;
//     cout<<"What do you want to do?"
// }

int main(){

        problemaUno();
        problemaDos();
        problemaTres();
        problemaCuatro();

    return 0;
}