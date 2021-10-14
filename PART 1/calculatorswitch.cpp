#include <iostream>
using namespace std;

int main()
{
    int selection;
    double num1, num2, result;
    string type;

    cout << "THIS IS SIMPLE CALCULATOR APP! \n";
    cout << "Select the operation: \n1.Addition \n2.Subtraction \n3.Multiplication \n";
    cout << "Enter your choice: ";
    cin >> selection;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "\nEnter second number: ";
    cin >> num2;

    switch (selection)
    {
    case 1:
        type = "Addition";
        result = num1 + num2;
        break;
    case 2:
        type = "Subtraction";
        result = num1 - num2;
        break;
    case 3:
        type = "Multiplication";
        result = num1 * num2;
        break;
    default:
        cout << "Invalid selection";
    }

    cout<<"Result of "<<type<<" two numbers is: "<<result;
}