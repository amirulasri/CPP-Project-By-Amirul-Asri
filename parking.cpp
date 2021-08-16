#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main(){
    //DECLARATION
    string date;
    double  timeEnter, timeExit, totalPayment;
    char carNo[100];

    //GET CURRENT DATE
    time_t tmNow;
    tmNow = time(NULL);
    struct tm t = *localtime(&tmNow);
    date = to_string(t.tm_mday)+"/"+to_string(t.tm_mon+1)+"/"+to_string(t.tm_year+1900);

    //SET FOR 2 DECIMAL PLACE EVERY NUMBERS
    cout.setf(ios::fixed);
    cout.precision(2);

    //GET CAR NUMBER WITH SPACE INPUT
    cout<<"ABC PRIVATE PARKING \nEnter your car number: ";
    cin.getline(carNo,sizeof(carNo));

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