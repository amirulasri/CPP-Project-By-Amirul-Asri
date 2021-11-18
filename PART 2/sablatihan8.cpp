#include <iostream>
using namespace std;

void magic(int x, int &y, int &z)
{
    x = y * z - 2;
    cout << z << "" << y << "" << x + 2 << endl;
    y = y * (x + 1);
    cout << y + 1 << "" << x << "" << z << endl;
    z = x / 2 * 1;
    cout << x + 1 << "" << z + 2 << "" << y + 2 << endl;
}

int main()
{
    int x = 3, y = 2, z = 4;
    cout << x << "" << y + 2 << "" << z * 2 << endl;
    magic(z, x, y);
    cout << x + 1 << "" << z << "" << y + 2 << endl;
}