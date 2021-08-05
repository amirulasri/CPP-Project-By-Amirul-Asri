#include <iostream>
using namespace std;

int main()
{
    int no1, no2, sum, diff, multiply, avg, max, min;

    cout << "Enter first number: ";
    cin >> no1;

    cout << "\nEnter second number: ";
    cin >> no2;

    sum = no1 + no2;
    diff = no1 - no2;
    multiply = no1 * no2;
    avg = (no1 + no2) / 2;

    if (no1 > no2)
    {
        max = no1;
    }
    else
    {
        max = no2;
    }

    if (no1 < no2)
    {
        min = no1;
    }
    else
    {
        min = no2;
    }

    cout << "\nSum of two number: " << sum;
    cout << "\nDifference of two number: " << diff;
    cout << "\nProduct of two number: " << multiply;
    cout << "\nAverage of two number: " << avg;
    cout << "\nThe largest integer: " << max;
    cout << "\nThe smallest integer: " << min;

    return 0;
}