#include <iostream>
using namespace std;

void getGrade(int mark)
{
    char grade;
    if (mark >= 80)
    {
        grade = 'A';
    }
    else if (mark >= 70 && mark <= 79)
    {
        grade = 'B';
    }
    else if (mark >= 50 && mark <= 69)
    {
        grade = 'C';
    }
    else
    {
        grade = 'F';
    }

    cout << "Your grade is: " << grade;
}

int main()
{
    int mark;
    string result;
    cout << "Hi. enter your marks: ";
    cin >> mark;
    getGrade(mark);
}