#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //DECLARATION
    string date;
    double  timeEnter, timeExit, totalPayment;
    char carNo[100];

    //SET FOR 2 DECIMAL PLACE EVERY NUMBERS
    cout.setf(ios::fixed);
    cout.precision(2);

    //GET CAR NUMBER WITH SPACE INPUT
    cout<<"ABC PRIVATE PARKING \nEnter your car number: ";
    cin.getline(carNo,sizeof(carNo));

    //ENTER DATE BY USER
    cout<<"\nEnter date (eg 10/5/2021): ";
    cin>>date;

    //TIME ENTER INPUT
    cout<<"\nTime enter (eg 2.30) (12 Hour System): ";
    cin>>timeEnter;

    //TIME EXIT INPUT
    cout<<"\nTime exit (eg 4.30) (12 Hour System): ";
    cin>>timeExit;

    //CALCULATE FOR PAYMENT
    totalPayment = (timeExit-timeEnter) - 1;
    totalPayment = totalPayment + 2;

    //DISPLAY RESULT
    cout<<"---Your receipt---\n\n\n";
    
    cout<<setw(30);
    cout<<"ABC PRIVATE PARKING";
    cout<<"\nCAR NUMBER: "<<carNo;
    cout<<"\nDATE: "<<date;
    cout<<"\nTIME (ENTER): "<<timeEnter;
    cout<<setw(20);
    cout<<"TIME (EXIT): "<<timeExit<<endl;
    cout<<"TOTAL PAYMENT: RM"<<totalPayment<<endl;
    cout<<setw(35)<<"THANK YOU FOR USING OUR SERVICE";

    return 0;
}