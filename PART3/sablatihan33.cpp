#include <iostream>
using namespace std;

void paparpurata(double * yuranmurid, int bilanganmurid){
    double puratayuran = 0;
    for(int i = 0; i < bilanganmurid; i ++){
        puratayuran = puratayuran + yuranmurid[i];
    }
    puratayuran = puratayuran/bilanganmurid;
    cout << "Purata yuran yang dibayar oleh semua murid: RM" << puratayuran << endl;
}

void paparjumlah(double * yuranmurid, int bilanganmurid){
    double jumlahyuran = 0;
    for(int i = 0; i < bilanganmurid; i ++){
        jumlahyuran = jumlahyuran + yuranmurid[i];
    }
    cout << "Jumlah keseluruhan yuran yang dibayar oleh semua murid: RM" << jumlahyuran << endl;
}

void inputdatamurid(string * namamurid, double * yuranmurid, int bilanganmurid){
    for(int i = 0; i < bilanganmurid; i ++){
        cout << "Masukkan nama murid " << (i+1) << ": ";
        cin >> namamurid[i];
        cout << "Masukkan yuran murid " << (i+1) << ": RM";
        cin >> yuranmurid[i];
        cout << endl;
    }
}

int main(){
    int bilanganmurid;
    string * namamurid;
    double * yuranmurid;

    cout << "Selamat datang ke pusat tuisyen, masukkan bilangan murid yg perlu didaftarkan: ";
    cin >> bilanganmurid;
    namamurid = new string[bilanganmurid];
    yuranmurid = new double[bilanganmurid];

    inputdatamurid(namamurid, yuranmurid, bilanganmurid);
    paparjumlah(yuranmurid, bilanganmurid);
    paparpurata(yuranmurid, bilanganmurid);
}