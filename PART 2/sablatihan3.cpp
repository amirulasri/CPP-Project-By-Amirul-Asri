#include <iostream>
using namespace std;

int input_Nombor1()
{
    int iNombor1;
    cout<<"Masuk bacaan meter awal:";
    cin>>iNombor1;
    return iNombor1;
}

int input_Nombor2()
{
    int iNombor2;
    cout<<"Masuk bacaan meter akhir:";
    cin>>iNombor2;
    return iNombor2;
}

int calculate_jumlah (int no1, int no2)
{
    const double caj = 8.08;
    double cajPelanggan = 1.388;
    int jumlah;
    jumlah = (no1 + no2) + caj + cajPelanggan;
    return jumlah;
}

int calculate_cukai (int calculate_jumlah)
 {
     int cukai ;
     cukai = calculate_jumlah * 0.08;
     return cukai;
 }

 void display_jumlah_dan_cukai(int jumlah,int cukai)
 {
     cout<<"Nilai semasa:"<<jumlah<<endl;
     cout<<"Nilai cukai:"<<cukai<<endl;
 }

 void nilai_Sebenar (int jumlah  , int cukai)
 {
     int nSebenar;
     nSebenar = jumlah + cukai ;
     cout<<"Nilai sebenar: "<<nSebenar;
 }

int main ()
{
    int no1,no2,jumlah,cukai,sebenar;
    no1 = input_Nombor1();
    no2 = input_Nombor2();
    jumlah = calculate_jumlah(no1,no2);
    cukai = calculate_cukai (jumlah);
    display_jumlah_dan_cukai(jumlah,cukai);
    nilai_Sebenar(jumlah,cukai);
    
}