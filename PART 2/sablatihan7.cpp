#include <iostream>
using namespace std;

int harga_Barang()
{
    int hBarang;
    cout<<"Harga barang asal:";
    cin>>hBarang;
    return hBarang;

}

int calculate_peratus( int asal )
{
    double peratus;
    peratus = asal * 0.6;
    return peratus;
}

int calculate_jumlah(int asal , int peratus)
{
    int jumlah;
    jumlah = asal + peratus;
    return jumlah;
}

void jumlah_sebenar(int peratus ,int jumlah)
{
    cout<<"Harga ke naikkan barang:"<<peratus<<endl;
    cout<<"Harga barang terkini:"<<jumlah<<endl;

}


int main()
{
 int asal,peratus,jumlah;
 asal = harga_Barang();
 peratus = calculate_peratus(asal);
 jumlah = calculate_jumlah (asal,peratus);
 jumlah_sebenar(peratus,jumlah);
}