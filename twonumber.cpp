#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //DECLARE VARIABLE
    int no1, no2, sum, diff, product, avg, max, min;

    //MESSAGE FOR ENTERING FIRST NUMBER
    cout << "Enter first number: ";
    //USER CAN INPUT NUMBER 1
    cin >> no1;

    //MESSAGE FOR ENTERING FIRST NUMBER
    cout << "\nEnter second number: ";
    //USER CAN INPUT NUMBER 2
    cin >> no2;

    //CALCULATE SUM
    sum = no1 + no2;
    //CALCULATE DIFF
    diff = no1 - no2;
    //CALCULATE PRODUCT(MULTIPLY)
    product = no1 * no2;
    //CALCULATE AVARAGE
    avg = (no1 + no2) / 2;

    //COMPARING TWO NUMBER AND GET MAX NUMBER
    if (no1 > no2)
    {
        max = no1;
    }
    else
    {
        max = no2;
    }

    //COMPARING TWO NUMBER AND GET MIN NUMBER
    if (no1 < no2)
    {
        min = no1;
    }
    else
    {
        min = no2;
    }

    //DISPLAY ALL RESULT
    cout << "\nSum of two number: " << sum;
    cout << "\nDifference of two number: " << diff;
    cout << "\nProduct of two number: " << product;
    cout << "\nAverage of two number: " << avg;
    cout << "\nThe largest integer: " << max;
    cout << "\nThe smallest integer: " << min << endl;
    system("pause");

    return 0;

}