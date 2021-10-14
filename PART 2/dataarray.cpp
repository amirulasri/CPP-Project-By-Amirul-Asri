//AMIRUL ASRI - GET 10 MARKS AND CALCULATE AVERAGE

#include <iostream>
using namespace std;

double averageMarks(double arrayMarks[]) {
    double sum, avgresult;
    //SUM ALL USING FOR
    for(int i=0; i<10; i++){
        sum = sum + arrayMarks[i];
    }
    avgresult = sum/10;
    return avgresult;
}

void getMarks()
{
    double arrayMark[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "Hi. Enter mark " << i + 1 << ": ";
        cin >> arrayMark[i];
    }
    double average = averageMarks(arrayMark);
    cout << "--------Marks you entered---------\n";
    for(int i = 0; i<10; i++){
        cout << "Mark "<< i+1 << ": " << arrayMark[i] << "%" << endl;
    }

    cout << "\nAverage of marks: " << average << "%";
}

int main()
{
    cout << "This program will calculate average of 10 marks \nYou need to enter 10 marks to get the average \n";
    getMarks();
}