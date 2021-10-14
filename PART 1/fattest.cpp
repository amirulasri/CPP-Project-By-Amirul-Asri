#include <iostream>
using namespace std;

int main()
{
    double weightA, weightB, fat;
    cout << "Enter weight A (KG): ";
    cin >> weightA;
    cout << "Enter weight B (KG): ";
    cin >> weightB;

    //RESULT COMPARE
    if (weightA > weightB)
    {
        fat = weightA;
        //OUTPUT
        cout << "\nFAT A: " << fat << " KG. Greater than B.";
    }
    else
    {
        fat = weightB;
        //OUTPUT
        cout << "\nFAT B: " << fat << " KG. Greater than A.";
    }
}