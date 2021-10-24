#include <iostream>
using namespace std;

double meter_cukai(double metertanpacukai){
    const double cukai = 0.08;
    double metercukai = metertanpacukai * cukai;
    return metercukai;
}

double meter_tanpa_cukai(int jumlahmeterdigunakan){
    const double cajpelanggan = 1.388;
    const double cajpiawai = 8.08;
    double metertanpacukai = jumlahmeterdigunakan + cajpelanggan + cajpiawai;
    return metertanpacukai;
}

int jumlah_meter_digunakan(int bacaanmeterawal, int bacaanmeterakhir){
    int jumlahmeterdigunakan = bacaanmeterakhir - bacaanmeterawal;
    return jumlahmeterdigunakan;
}

int main (){
    int bacaanmeterawal, bacaanmeterakhir; 
    int jumlahmeterdigunakan;
    double metertanpacukai;
    double metercukai;
    double jumlahbil;
    
    //SET FOR 2 DECIMAL PLACE EVERY NUMBERS
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Kira bil air" << endl; // ENDLINE BREAK MASUK BARIS BARU
    cout << "Masukkan meter awal: ";
    cin >> bacaanmeterawal;  // USER LETAK INPUT 1
    cout << "Masukkan meter akhir: ";
    cin >> bacaanmeterakhir; // USER LETAK INPUT 2
    jumlahmeterdigunakan = jumlah_meter_digunakan(bacaanmeterawal, bacaanmeterakhir);
    metertanpacukai = meter_tanpa_cukai(jumlahmeterdigunakan);
    metercukai = meter_cukai(metertanpacukai);
    jumlahbil = metercukai + metertanpacukai;

    //DISPLAY
    cout << "Jumlah meter digunakan: " << jumlahmeterdigunakan << endl;
    cout << "Meter tanpa cukai: RM" << metertanpacukai << endl;
    cout << "Meter cukai: RM" << metercukai << endl;
    cout << "Jumlah bil: RM" << jumlahbil << endl;
}