#include <iostream>
using namespace std;

int main(){
    int num1[3] = {10, 20, 30};
    int num2[3];
    int num1length = sizeof(num1)/sizeof(num1[0]);
    for (int i = 0; i < num1length; i++){
        num2[i] = num1[num1length - i - 1];
    }

    cout << "Array from num1:" << endl;
    for (int i = 0; i < num1length; i++){
        cout << num1[i] << endl;
    }

    cout << "\nArray from num2:" << endl;
    for (int i = 0; i < num1length; i++){
        cout << num2[i] << endl;
    }
}
