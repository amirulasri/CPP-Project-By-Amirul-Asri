#include <iostream>
using namespace std;

int main (){
    double fahrenheit, celsius;

    cout<<"INPUT fahrenheit: ";
    cin>>fahrenheit;

    celsius = (5 * (fahrenheit - 32)) / 9;

    cout<<"CELSIUS IS: "<<celsius;
}