#include <iostream>
using namespace std;

int input_hargabarang()
{
    int hargabarang;
    cout<<"Harga barang asal:";
    cin>> hargabarang;
    return hargabarang;
}

int calculate_hargakenaikkan(int barang)
{
    int hargakenaikkan;
    hargakenaikkan = barang * 0.6;
    return hargakenaikkan;
}

int calculate_hargajualan(int barang, int kenaikkan)
{
    int hargajualan;
    hargajualan = barang + kenaikkan;
    return hargajualan;
}

void display_hargakenaikkan_jualan(int kenaikkan, int jualan)
{
    cout<<"Harga kenaikkan:"<< kenaikkan<< endl;
    cout<<"Harga jualan barang:"<< jualan<< endl;
}

int main()
{
    int barang, kenaikkan, jualan ;
    barang = input_hargabarang();
    kenaikkan = calculate_hargakenaikkan(barang);
    jualan = calculate_hargajualan(barang, kenaikkan);
    display_hargakenaikkan_jualan(kenaikkan, jualan);
}