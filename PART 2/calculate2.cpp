#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t = 5, r = 10;
    double T = pow(r, 3) / t - 2;
    cout << T << endl;
    double A = pow(r, 3) / (t - 2);
    cout << A << endl;
    double B = (r + t) > sqrt (pow(t, 2));
    cout << B << endl;
    double C = (t > (r + 2)) && true || false;
    cout << C << endl;
}