#include <iostream>
using namespace std;
class Subject
{
protected:
    string name;
    int assess_no;
    float total_marks, gpa;

public:
    Subject() : name(""), assess_no(0) {}
    virtual void calcTotal() = 0; //ADD METHOD BRACKETS
    float getGPA()
    {
        calcTotal();
        if (total_marks >= 90)
            gpa = 4.0;
        else if (total_marks >= 80 && total_marks < 90)
            gpa = 3.25;
        else if (total_marks >= 70 && total_marks < 80)
            gpa = 2.5;
        else if (total_marks >= 60 && total_marks < 70)
            gpa = 1.75;
        else if (total_marks >= 50 && total_marks < 60)
            gpa = 1.0;
        else
            gpa = 0.0;
        
        return gpa;
    }
    void showName()
    {
        cout << "Subject Name: " << name << endl;
    }
    void displayGPA();
    //REMOVE ParallelProcess
};

class ParallelProcess : public Subject
{
    //ADD MISSING VARIABLE
    int assign_no, labtest_no;
    float assign_marks, labtest_marks, midterm_marks, final_marks;

public:
    ParallelProcess() : assign_no(1),
                        labtest_no(1), assign_marks(.0), labtest_marks(.0),
                        midterm_marks(.0), final_marks(.0) {}
    void setAssess()
    {
        assess_no = assign_no + labtest_no + 2;
        cout << "No. of Assessments: " << assess_no << endl;
    }
    void calcTotal()
    {
        total_marks = assign_marks / assign_no +
                      labtest_marks / labtest_no + midterm_marks + final_marks;
    }
    void setMarks()
    {
        showName();
        cout << "No. of assignments: ";
        cin >> assign_no;
        cout << "No. of lab tests: ";
        cin >> labtest_no;
        setAssess();
        cout << "Assignment marks (0-60) : ";
        cin >> assign_marks;
        cout << "Total lab test marks (0-100): ";
        cin >> labtest_marks;
        cout << "Midterm marks (0-20) : ";
        cin >> midterm_marks;
        cout << "Final marks (0-40) : ";
        cin >> final_marks;
    }
};

//EXTENDS TO SUBJECT
class CyberEthics : public Subject
{
    //ADD MISSING VARIABLE
    int quiz_no, access_no;
    float quiz_marks, assign_marks, midterm_marks, final_marks;

public:
    CyberEthics() : quiz_no(1),
                    quiz_marks(.0), assign_marks(.0), midterm_marks(.0),
                    final_marks(.0) {}
    void setAssess()
    {
        assess_no = quiz_no + 3;
        cout << "No. of Assessments: " << assess_no << endl;
    }
    void calcTotal()
    {
        total_marks = quiz_marks / quiz_no + assign_marks +
                      midterm_marks + final_marks;
    }
    void setMarks()
    {
        showName();
        cout << "No. of quizzes: ";
        cin >> quiz_no;
        setAssess();
        cout << "Total quiz marks (0-40): ";
        cin >> quiz_marks;
        cout << "Assignment marks (0-30): ";
        cin >> assign_marks;
        cout << "Midterm marks (0-20): ";
        cin >> midterm_marks;
        cout << "Final marks (0-40): ";
        cin >> final_marks;
    }
};

void displayGPA(ParallelProcess s)
{
    cout << "------------------------------\n";
    cout << "Total Subject Marks: ";
    s.calcTotal();
    cout << endl;
    cout << "Subject GPA: " << s.getGPA() << endl;
    cout << "------------------------------\n\n";
}
int main()
{
    float gpa;

    //ADD classname at front
    ParallelProcess pp;
    CyberEthics ce;
    ce.setMarks();
    pp.getGPA();
    displayGPA(pp);
    ce.setMarks();
    ce.getGPA();
    displayGPA(pp);
}
