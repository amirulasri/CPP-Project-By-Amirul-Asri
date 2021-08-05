#include <iostream>
using namespace std;

int kiraduanombor(int no1, int no2){
    double hasil;
    hasil = no1 + no2;
    return hasil;
}

int main(){
    int kira = kiraduanombor(3, 4);
    cout<<kira;
}