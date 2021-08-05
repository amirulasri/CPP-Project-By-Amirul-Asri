#include <iostream>
using namespace std;

int main(){
    double bmi, mass, heightMeters, feet, inches, pounds;

    cout<<"Welcome to BMI calculator!";
    cout<<"\nEnter your height(feet): ";

    cin>>feet;

    cout<<"\nEnter your inches: ";

    cin>>inches;

    cout<<"\nEnter your weight(pounds): ";

    cin>>pounds;

    heightMeters = ((feet * 12) + inches)*0.0254;
    mass = (pounds / 2.22);
    bmi = mass / (heightMeters * heightMeters);

    cout<<"OK! Your BMI is: "<<bmi;

    return 0;
}