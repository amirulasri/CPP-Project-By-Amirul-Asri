#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char nama[8];

    char input[100];
    cin >> input;

    strcpy(nama, input);

    cout << nama;
}