//AMIRUL ASRI - GET 10 MARKS AND CALCULATE AVERAGE

#include <iostream>
using namespace std;
double arrayMark[10];

double averageMarks(double arrayMarks[])
{
    double sum, avgresult;
    //SUM ALL USING FOR
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arrayMarks[i];
    }
    avgresult = sum / 10;
    return avgresult;
}

void putMarksIntoArray(double oneMarkValue, int indexMarkArray)
{
    arrayMark[indexMarkArray] = oneMarkValue; 
}

int main()
{
    double oneMarkValue;
    cout << "This program will calculate average of 10 marks \nYou need to enter 10 marks to get the average \n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Hi. Enter mark " << i + 1 << ": ";
        cin >> oneMarkValue;
        putMarksIntoArray(oneMarkValue, i);
    }
    cout << "--------Marks you entered---------\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "Mark " << i + 1 << ": " << arrayMark[i] << "%" << endl;
    }
    double average = averageMarks(arrayMark);
    cout << "\nAverage of marks: " << average << "%";
}