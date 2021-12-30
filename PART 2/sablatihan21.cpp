#include <iostream>
using namespace std;
double totalAntarabangsa, totalTempatan;
void nilaiTempatan(int &tnom, int &anom)
{
    cout << "Bilangan minit untuk panggilan tempatan:";
    cin >> tnom;
    cout << "Bilangan minit untuk panggilan Antarabangsa:";
    cin >> anom;
    if (tnom < 0 || anom < 0)
    {
        cout << "Nilai yang anda masukkan negatif";
        exit(EXIT_FAILURE);
    }
}

void jumlahTempatan(int &tnom)
{
    double m1, m2, m3;
    if (tnom <= 100)
    {
        m1 = tnom * 0.10;
        totalTempatan = m1;
        cout << "Jumlah panggilan tempatan :" << totalTempatan << endl;
    }
    else if (tnom <= 200)
    {
        m1 = 100 * 0.10;
        m2 = (tnom - 100) * 0.09;
        totalTempatan = m1 + m2;
        cout << "Jumlah panggilan tempatan :" << totalTempatan << endl;
    }
    else if (tnom > 200)
    {
        m1 = 100 * 0.10;
        m2 = 100 * 0.09;
        m3 = (tnom - 200) * 0.08;
        totalTempatan = (m1 + m2 + m3);
        cout << "Jumlah panggilan tempatan :" << totalTempatan << endl;
    }
}

void jumlahAntarabangsa(int &anom)
{
    double m4, m5, m6;
    if (anom <= 200)
    {
        m4 = anom * 0.30;
        totalAntarabangsa = m4;
        cout << "Jumlah panggilan antarabangsa:" << m4 << endl;
    }
    else if (anom >= 200 && anom < 299)
    {
        m4 = 200 * 0.30;
        m5 = (anom - 200) * 0.28;
        totalAntarabangsa = m4 + m5;
        cout << "Jumlah panggilan antarabangsa:" << totalAntarabangsa << endl;
    }
    else if (anom > 299)
    {
        m4 = 200 * 0.30;
        m5 = 100 * 0.28;
        m6 = (anom - 300) * 0.25;
        totalAntarabangsa = m4 + m5 + m6;
        cout << "Jumlah panggilan antarabangsa:" << totalAntarabangsa << endl;
    }
}

void jumlahKeseluruhan()
{
    double jumlah = totalAntarabangsa + totalTempatan;
    cout << "jumlah keseluruhan:" << jumlah;
}

int main()
{
    int tnom, anom, jumlah, totalAntarabangsa, totalTempatan;
    nilaiTempatan(tnom, anom);
    jumlahTempatan(tnom);
    jumlahAntarabangsa(anom);
    jumlahKeseluruhan();
}