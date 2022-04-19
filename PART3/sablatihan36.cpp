#include <iostream>
using namespace std;

void papardatapelajar(string arraypelajar[5][2]){
    //PAPAR KESELURUHAN DATA
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            cout << "Nama Pelajar " << (i+1) << ": " << arraypelajar[i][j] << endl;
            cout << "Umur Pelajar " << (i+1) << ": " << arraypelajar[i][j] << endl << endl;
        }
    }
}

void inputdatapelajar(string arraypelajar[5][2]){
    //GUNAKAN FOR LOOP UNTUK MENYIMPAN DATA (NESTED FOR BAGI 2D)
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 2; j++){
            cout << "Masukkan nama pelajar " << (i+1) << ": ";
            cin >> arraypelajar[i][j];
            j++;
            cout << "Masukkan umur pelajar " << (i+1) << ": ";
            cin >> arraypelajar[i][j];
        }
    }
}

int main(){
    //WUJUDKAN PEMBOLEHUBAH ARRAY bernama arraypelajar dengan size 2D [5][2]
    string arraypelajar[5][2];
    inputdatapelajar(arraypelajar);
    papardatapelajar(arraypelajar);
}