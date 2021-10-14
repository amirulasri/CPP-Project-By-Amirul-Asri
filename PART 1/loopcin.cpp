#include <iostream>
using namespace std;

int main(){
    double h, sum =0, avg;
    int i;
    for(i=0; i<3; i++){
        cout << "Enter height: ";
        cin >> h;
        sum = sum + h;
    }
    avg = sum / 3;
    cout << "Sum is: " << sum;
    cout << "\nAverage: " << avg;
    return 0;
}