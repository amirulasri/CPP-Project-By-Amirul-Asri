#include <iostream>
using namespace std;

int main()
{
    int subject, student, mark;
    double marks;
    double arraymarks[3];
    double avgmark;

    //MAIN FOR SUBJECT
    for (subject = 0; subject < 4; subject++)
    {
        avgmark = 0;
        cout << "---------------------------" << endl;
        cout << "Subject: " << subject + 1 << endl << endl;
        cout << "Enter marks for 3 student for subject " << subject + 1 << endl;

        //GET ARRAY MARKS STUDENT
        for (mark = 0; mark < 3; mark++)
        {
            cout << "Student " << mark + 1 << ": ";
            cin >> arraymarks[mark];
        }

        //CALCULATE AVG
        for (mark = 0; mark < 3; mark++)
        {
            avgmark = avgmark + arraymarks[mark];
        }
        cout << "Average marks of 3 students for subject "<< subject + 1 <<" : " << avgmark/3 << "% \n\n";
    }
}