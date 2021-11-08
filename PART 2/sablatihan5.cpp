#include <iostream>
using namespace std;

int input_Nombor1()
{
    int iNombor;
    cout << "Tolong masukkan nombor pertama:";
    cin >> iNombor;
    return iNombor;
}

int input_Nombor2()
{
    int iNombor;
    cout << "Tolong masukkan nombor kedua:";
    cin >> iNombor;
    return iNombor;
}

int calculate_tambah(int pertama, int kedua)
{
    int tambah = 0;
    tambah = pertama + kedua;
    return tambah;
}

void display_tambah(int pertama, int kedua, int ketiga)
{
    cout << "Hasil tambah (" << pertama << " + " << kedua << " = " << ketiga << ')' << ".Tahniah kepada diri saya !!! " << endl;
}

int main()
{
    int pertama, kedua, ketiga;
    pertama = input_Nombor1();
    kedua = input_Nombor2();
    ketiga = calculate_tambah(pertama, kedua);
    display_tambah(pertama, kedua, ketiga);
}