#include <iostream>
using namespace std;

int main (){
    int d = 2 % 2 * 4;
    cout << d << endl;
    d = d % (2*4);
    cout << d << endl;
}