#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const float PI = 3.142;

    cout << "1 = Triangle";
    cout << "\n2 = Rectangle";
    cout << "\n3 = Oval";
    cout << "\n4 = Square";
    cout << "\n5 = Trapezium";

    int area;
    cout << "\nEnter the shape: ";
    cin >> area;

    float b;
    cout << "\nEnter base: ";
    cin >> b;

    float h;
    cout << "\nEnter height: ";
    cin >> h;

    float a;
    cout << "\nEnter wide: ";
    cin >> a;

    float formula;
    switch (area)
    {
    case 1:
        formula = 1 / 2 * b * h;
        break;
    case 2:
        formula = b * h;
        break;
    case 3:
        formula = PI * a * b;
        break;
    case 4:
        formula = pow(a, 2);
        break;
    case 5:
        formula = 1 / 2 * (a + b) * h;
        break;
    }
    cout << "Total = " << area << endl;
}