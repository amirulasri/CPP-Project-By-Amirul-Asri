#include <iostream>
#include <cstdlib>
using namespace std;

//FUNCTION FOR DISPLAY TOTAL WITH STAFF ACTIVITY
void displayTotal(double totalfee, double activityfee){
    cout << "\n\n++++++++++++++++++\n";
    cout << "Total fee is RM" << totalfee - activityfee << " with " << "charge for staff activity (RM"<<activityfee<<") (10%) deducted from total fee.\n";
    cout << "++++++++++++++++++\n";
}

//FUNCTION FOR CALCULATE STAFF ACT
double feeActivity(double totalfee){
    double activityfee = 0;
    if(totalfee > 2500){
        activityfee = totalfee * 0.1;
    }else{
        activityfee = 0;
    }
    return activityfee;
}

//CALCULATE ALL FEE
double calcTotalFee(int *arraystudentfee, int noofstudents){
    double totalfee = 0;
    for (int i=0; i<noofstudents; i++){
        totalfee = totalfee + arraystudentfee[i];
    }
    return totalfee;
}

//DISPLAY EVERY STUDENT FEE
void displayMonthFee(int *arraystudentfee, int noofstudents){
    cout << "\nEach student fee displayed here: \n";
    for (int i=0; i<noofstudents; i++){
        cout << "Student " << i + 1 << ": RM"<< arraystudentfee[i] << endl;
    }
}

//SET FEE FOR EACH STUDENT
int *setFee(int noofstudents){
    int *arraystudentfee = new int[noofstudents];
    int coursecode;
    cout << "Enter course code for every student. Below are the course given with code and price\n1. Java programming (RM 200)\n2. MS Office (Word, Excel, Powerpoint) (RM 150)\n3.Autocad (RM 100)\n0. Exit program\n\n";
    for (int i=0; i<noofstudents; i++){
        cout << "Student " << i + 1 << ": ";
        cin >> coursecode;
        if(coursecode == 0){
            cout << "\nUser cancel the calculation";
            exit(EXIT_SUCCESS);
        }else if(coursecode == 1){
            arraystudentfee[i] = 200;
        }else if(coursecode == 2){
            arraystudentfee[i] = 150;
        }else if(coursecode == 3){
            arraystudentfee[i] = 100;
        }else {
            cout << "\nINVALID CODE. TRY AGAIN!\n";
            i = i - 1;
        }
    }
    return arraystudentfee;
}

//GET NUMBER OF STUDENT AND RETURN BACK TO MAIN
int getNoOfStudent(){
    int noofstudents = 0;
    cout << "\nEnter number of student. At least 20: ";
    cin >> noofstudents;
    if(noofstudents < 20){
        cout << "The number of student that you have entered less than 20. Program stopped";
        exit(EXIT_SUCCESS);
    }
    return noofstudents;
}

//DISPLAY MONTH NAME
void displayMonth(string monthname){
    cout << "\nMonth entered: " << monthname;
}

//GET MONTH NAME ENTERED BY USER
string getMonth(){
    string monthname;
    cout << "Enter month name: ";
    cin >> monthname;
    return monthname;
}

//MAIN FUNCTION
int main(){
    //DECLARE VARIABLES
    string monthname;
    int noofstudents = 0;
    int *arraystudentfee;
    double totalfee;
    double activityfee = 0;

    //SHOW WELCOME MESSAGE
    cout << "Welcome to Wana Training Center \nBy Group 12\n";

    //CALL THE FUNCTION
    monthname = getMonth();
    displayMonth(monthname);
    noofstudents = getNoOfStudent();
    arraystudentfee = setFee(noofstudents);
    displayMonthFee(arraystudentfee, noofstudents);
    totalfee = calcTotalFee(arraystudentfee, noofstudents);
    activityfee = feeActivity(totalfee);
    displayTotal(totalfee, activityfee);
}