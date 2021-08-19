#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //DECLARATION
    string date, timeEnterType, timeExitType;
    double timeEnter, timeExit, totalPayment;
    char carNo[100];

    //GET CAR NUMBER WITH SPACE INPUT
    cout << "ABC PRIVATE PARKING \nEnter your car number: ";
    cin.getline(carNo, sizeof(carNo));

    //ENTER DATE BY USER
    cout << "\nEnter date (eg 10/5/2021): ";
    cin >> date;

    //SET FOR 2 DECIMAL PLACE EVERY NUMBERS
    cout.setf(ios::fixed);
    cout.precision(2);

    //TIME ENTER INPUT
    cout << "\nTime enter (eg 2.30 PM) (12 Hour System): ";
    cin >> timeEnter;
    cin >> timeEnterType;

    //TIME EXIT INPUT
    cout << "\nTime exit (eg 4.30 PM) (12 Hour System): ";
    cin >> timeExit;
    cin >> timeExitType;

    //Convert to 24 hour format for entering
    if ((timeEnterType == "PM" || timeEnterType == "pm") && timeEnter < 12)
    {
        timeEnter += 12.00;
    }
    else if ((timeEnterType == "AM" || timeEnterType == "am") && timeEnter < 12)
    {
        //DONT DO ANYTHING
    }
    else
    {
        cout << "\nWrong enter time format!. Try again.";
        exit(EXIT_SUCCESS);
    }

    //Convert to 24 hour format for exit
    if ((timeExitType == "PM" || timeExitType == "pm") && timeExit < 12)
    {
        timeExit += 12.00;
    }
    else if ((timeEnterType == "AM" || timeEnterType == "am") && timeExit < 12)
    {
        //DONT DO ANYTHING
    }else{
        cout << "\nWrong exit time format!. Try again.";
        exit(EXIT_SUCCESS);
    }

    //Make calculation
    totalPayment = timeExit - timeEnter;
    //CHECK IF PAYMENT NEGATIVE
    if(totalPayment <= 0){
        cout << "\nWrong enter time or exit time. Try again.";
        exit(EXIT_SUCCESS);
    }

    //ADD MORE RM 1 TO CHARGE FOR RM 2 FOR FIRST HOUR
    totalPayment += 1;

    //CONVERT BACK TO 12 HOUR FORMAT
    if(timeEnter > 12){
        timeEnter -= 12;
    }
    if(timeExit > 12){
        timeExit -= 12;
    }


    //DISPLAY RESULT
    cout << "---Your receipt---\n\n\n";

    cout << setw(30);
    cout << "ABC PRIVATE PARKING";
    cout << "\nCAR NUMBER: " << carNo;
    cout << "\nDATE: " << date;
    cout << "\nTIME (ENTER): " << timeEnter << " " << timeEnterType;
    cout << setw(20);
    cout << "TIME (EXIT): " << timeExit << " " << timeExitType << endl;
    cout << "TOTAL PAYMENT: RM" << totalPayment << endl;
    cout << setw(35) << "THANK YOU FOR USING OUR SERVICE";

    return 0;
}