#include <iostream>
using namespace std;

int jumlah(int no1, int no2){
    int hasil = no1 + no2;
    return hasil;
}

int beza(int no1, int no2){
    int nomborbesar, nomborkecil;
    if(no1 > no2){
        nomborbesar = no1;
        nomborkecil = no2;
    }else{
        nomborbesar = no2;
        nomborkecil = no1;
    }
    int hasil = nomborbesar - nomborkecil;
    return hasil;
}

int darab(int no1, int no2){
    int hasil = no1 * no2;
    return hasil;
}

int main(){
int no1, no2;
cout << "Masukkan nombor pertama: ";
cin >> no1;
cout << "Masukkan nombor kedua: ";
cin >> no2;
cout << "\n\nJumlah dua nombor itu ialah: "<<jumlah(no1, no2)<<endl;
cout << "Beza antara dua nombor itu ialah: "<<beza(no1, no2)<<endl;
cout << "Darab dua nombor itu ialah: "<<darab(no1, no2);
}