#include <iostream>
using namespace std;

int input()
{
    int quality;
    if (quality <= 0)
    {
        cout << "Please Key in the Quality og Game :";
        quality = input();
    }
    cin >> quality;

    return quality;
}

void discount(int q, float &T1, float &T2, float &T3, float &T4, float &T5)
{
    if (q < 10)
    {
        T1 = q * 90;
        T2 = 0;
        T3 = 0;
        T4 = 0;
        T5 = 0;
    }
    else if (q >= 10 && q <= 19)
    {
        T1 = q * 99;
        T2 = 0.2 * T1;
        T3 = T1 - T2;
    }
    else if (q >= 20 && q <= 49)
    {
        T1 = q * 99;
        T2 = 0.3 * T1;
        T3 = T1 - T2;
    }
    else if (q <= 50 && q < 99)
    {
        T1 = 9 * 99;
        T2 = 0.4 * T1;
        T3 = T1 - T2;
    }
    else if (q >= 100)
    {
        T1 = q * 99;
        T2 = 0.5 * T1;
        T3 = T1 - T2;
    }
}

int main()
{
    int bilangan, d;
    float q, total1, total2, total3, total4, total5;
    cout << "Please Key in the Quality og Game :";
    bilangan = input();
    cout << "Kuantiti yang dimasukkan :" << bilangan << endl;
    discount(bilangan, total1, total2, total3, total4, total5);
    cout << "Harga yang perlu di bayar : " << total1 << endl;
    cout << "Jumlah Diskaun : " << total2 << endl;
    cout << "Harga selepas diskaun" << total3 << endl;
}