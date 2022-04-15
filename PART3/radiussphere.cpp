#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int r;
    float pi, volume;
    pi = 3.142;

    cout << "Enter the radius of the sphere: ";
    cin >> r;

    volume = 1.333333*pi*pow(r, 3);

    cout << "The volume of the sphere is = " << volume;
}