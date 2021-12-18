#include <iostream>
using namespace std;

int main()
{
    //DECLARE NUMBER FOR LOOPING
    int noofstudent, noofquestion;

    //FOR STUDENT NAME FIELD
    string studentname;

    //MARKS VARIABLE
    double marksstudent = 0;                //FOR TEMPORARY TOTAL MARKS EACH STUDENTS
    double inputmarkstudent;                //FOR TEMPORARY INPUT EACH STUDENTS MARKS
    double arraystudentsmarks[noofstudent]; //FOR STORING EACH TOTAL STUDENTS MARKS WHEN AVERAGE MARKS NEEDED
    double totalallstudentsmarks = 0;       //FOR VARIABLE AVERAGE MARKS LOOP
    double averageallstudentsmarks = 0;
    int counterstudentmarks80 = 0;          //COUNT IF ANY STUDENTS HAVE TOTAL MARKS 80 AND HIGHER
    cout << "Enter the number of students: ";
    cin >> noofstudent;
    cout << "Enter the number of questions in the exam: ";
    cin >> noofquestion;
    cout << endl;
    for (int i = 0; i < noofstudent; i++)
    {
        cout << "Enter the name of the student: ";
        cin >> studentname;
        for (int j = 0; j < noofquestion; j++)
        {
            cout << "Enter the marks for question no. " << j + 1 << " : ";
            cin >> inputmarkstudent;
            marksstudent = marksstudent + inputmarkstudent;
        }
        cout << "Total marks for student named " << studentname << " is " << marksstudent << endl << endl;

        //COUNTER FOR STUDENTS HAVE TOTAL MARKS 80 AND HIGHER
        if (marksstudent >= 80)
        {
            counterstudentmarks80++;
        }

        arraystudentsmarks[i] = marksstudent;                         // STORE TOTAL MARKS EACH STUDENT
        totalallstudentsmarks = totalallstudentsmarks + marksstudent; //ADD TOTAL ALL STUDENTS MARKS
        marksstudent = 0;                                             //RESET FOR ANOTHER STUDENTS MARKS INPUT
    }

    //CALCULATE AVERAGE FOR ALL STUDENT MARKS
    averageallstudentsmarks = totalallstudentsmarks/noofstudent;

    cout << "Average marks scored by all students are " << averageallstudentsmarks << endl;
    cout << "No. of students with marks 80 and above is " << counterstudentmarks80;
}