#include <iostream>
using namespace std;

int main (){
    //DECLARE VARIABLE
    double fahrenheit, celsius;

    //MESSAGE FOR FAHRENHEIT INPUT
    cout<<"Input a degree in Fahrenheit: ";

    //INPUT FAHRENHEIT HERE
    cin>>fahrenheit;

    //PROCESS CALCULATE FAHRENHEIT TO CELSIUS
    celsius = (5 * (fahrenheit - 32)) / 9;

    //OUTPUT MESSAGE RESULT
    cout<<fahrenheit<<" degree Fahrenheit is equal to "<<celsius<<" in Celsius" << endl;

    system("pause");

    return 0;
}