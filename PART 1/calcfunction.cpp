#include <iostream>
using namespace std;

double resultfunction;

double add2number(double a, double b)
{
    resultfunction = a + b;
    return resultfunction;
}

double subtract2number(double a, double b)
{
    resultfunction = a - b;
    return resultfunction;
}

double multiply2number(double a, double b)
{
    resultfunction = a * b;
    return resultfunction;
}

double divide2number(double a, double b)
{
    resultfunction = a / b;
    return resultfunction;
}

int main()
{
    double no1, no2, result;
    int selection = 1;
    string type;
    bool trueselection = true;
    cout << "This is simple calculator app \n";
    while (selection != 0)
    {
        cout << "Select the operation: \n1.Addition \n2.Subtract \n3.Multiply \n4.Divide \n0.Exit \n\nEnter a Operation: ";
        cin >> selection;
        cout << "\n";

        switch (selection)
        {
        case 0:
            cout << "Bye";
            exit(1);
            break;
        case 1:
            type = "addiction";
            cout << "Addiction selected \n";
            cout << "Enter first number: ";
            cin >> no1;
            cout << "Enter second number: ";
            cin >> no2;
            result = add2number(no1, no2);
            break;

        case 2:
            type = "subtraction";
            cout << "Subtraction selected \n";
            cout << "Enter first number: ";
            cin >> no1;
            cout << "Enter second number: ";
            cin >> no2;
            result = subtract2number(no1, no2);
            break;

        case 3:
            type = "multiply";
            cout << "Multiply selected \n";
            cout << "Enter first number: ";
            cin >> no1;
            cout << "Enter second number: ";
            cin >> no2;
            result = multiply2number(no1, no2);
            break;

        case 4:
            type = "division";
            cout << "Division selected \n";
            cout << "Enter first number: ";
            cin >> no1;
            cout << "Enter second number: ";
            cin >> no2;
            result = divide2number(no1, no2);
            break;

        default:
            cout << "Invalid value. Try again. Or enter 0 or any alphabet if you want to exit";
            trueselection = false;
            break;
        }

        if (trueselection == true)
        {
            cout << "Result of " << type << " two numbers is: " << result << endl;
            cout << "------------" << endl
                 << endl;
        }
    }
}