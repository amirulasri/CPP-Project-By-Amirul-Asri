#include <iostream>
using namespace std;

int inputmarkah (){
    int iMarkah;
    cout << "Masukkan markah MT: ";
    cin >> iMarkah;
    return iMarkah;
}

void markah (int mt){
    if(mt > 50){
        cout << "Anda lulus";
    }else{
        cout << "Anda gagal";
    }
}

int main (){
    int input;
    input = inputmarkah();

    cout << "Keputusan anda ialah: ";
    markah(input);
}