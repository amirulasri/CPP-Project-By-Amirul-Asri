#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main ()
{

    //DECLARATION
    string date, timeEnterType, timeExitType;
    double timeEnter, timeExit, totalPayment;
    char carNo [100];
    
    //GET CAR NUMBER WITH SPACE INPUT
    cout << "ABC PRIVATE PARKING \nEnter your car number: ";
    cin.getline(carNo, sizeof (carNo));
    
    //ENTER DATE BY USER
    cout << "\nEnter date (eg 10/5/2021) : ";
    cin >> date;
    
    //SET FOR 2 DECIMAL PLACE EVERY NUMBERS
    cout.setf(ios::fixed);
    cout.precision(2);
    
    //TIME ENTER INPUT 
    cout << "\nTime enter (eg 2.30 PM) (12 Hour System): ";
    cin >> timeEnter;
    cin >>  timeEnterType;
    
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
	    cout << "\nWrong enter time format for exit.";
	    exit(EXIT_SUCCESS);
    }
	
	//Make calculation
	totalPayment = timeExit - timeEnter;
	
	//CHECK IF PAYMENT NEGATIVE
	if (totalPayment <= 0){
		cout << "\nWrong enter time or exit time. Try again.";
		exit(EXIT_SUCCESS);
	}
	
	//ADD MORE RM 1 TO CHARGE FOR RM 2 FOR FIRST HOUR
	totalPayment +=1;
	
	//CONVERT BACK TO 12 HOUR FORMAT
	if(timeEnter >12) {
		cout <<totalPayment;
		timeEnter -= 12;
	}
	//DISPLAY RESULT
	cout << "---Your receipt---\n\n\n";
	
	cout << setw(30);
	cout << "ABC PRIVATE PARKING";
	cout << "\nCAR NUMBER: " << carNo;
	cout << "\nDATE: ";
	cout << "\nTIME (ENTER): " << timeEnter << " " << timeEnterType;
	cout << "TIME (EXIT): " << timeExit << " " << timeEnterType << endl;
	cout << "TOTAL PAYMENT: RM" << totalPayment << endl;
	cout << setw(35) << "THANKYOU FOR USING OUR SERVICE";
	
	return 0;
	
}