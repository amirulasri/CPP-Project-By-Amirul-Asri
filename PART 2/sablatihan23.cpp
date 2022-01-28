#include <iostream>
using namespace std;
double totalAntarabangsa, totalTempatan, selection;
void nilaiTempatan(int &tnom, int &anom)
{
    cout << "Bilangan minit untuk panggilan tempatan:";
    cin >> tnom;
    cout << "Mobile ke mobile (1) Mobile ke talian tetap (2): ";
    cin >> selection;
    cout << "Bilangan minit untuk panggilan Antarabangsa:";
    cin >> anom;
    if (tnom < 0 || anom < 0)
    {
        cout << "Nilai yang anda masukkan negatif";
        exit(EXIT_FAILURE);
    }
}

void jumlahTempatan(int &tnom, int selection)
{
    double m1, m2, m3, m4, tax;
    if (selection == 1)
    {
        if (tnom <= 100)
        {
            m1 = tnom * 0.50;
            totalTempatan = m1;
            cout << "Jumlah panggilan tempatan : RM" << totalTempatan << endl;
        }
        else if (tnom <= 200)
        {
            m1 = 100 * 0.50;
            m2 = (tnom - 100) * 0.45;
            totalTempatan = m1 + m2;
            cout << "Jumlah panggilan tempatan : RM" << totalTempatan << endl;
        }
        else if (tnom <= 500)
        {
            m1 = 100 * 0.50;
            m2 = 100 * 0.45;
            m3 = (tnom - 400) * 0.40;
            totalTempatan = (m1 + m2 + m3);
            cout << "Jumlah panggilan tempatan : RM" << totalTempatan << endl;
        }
        else if (tnom > 500)
        {
            m1 = 100 * 0.50;
            m2 = 100 * 0.45;
            m3 = 100 * 0.40;
            m4 = (tnom - 500) * 0.30;
            totalTempatan = (m1 + m2 + m3 + m4);
            cout << "Jumlah panggilan tempatan : RM" << totalTempatan << endl;
        }
    }else if(selection == 2){
        if (tnom <= 100)
        {
            m1 = tnom * 0.30;
            totalTempatan = m1;
            cout << "Jumlah panggilan tempatan : RM" << totalTempatan << endl;
        }
        else if (tnom <= 200)
        {
            m1 = 100 * 0.30;
            m2 = (tnom - 100) * 0.25;
            totalTempatan = m1 + m2;
            cout << "Jumlah panggilan tempatan : RM" << totalTempatan << endl;
        }
        else if (tnom <= 500)
        {
            m1 = 100 * 0.30;
            m2 = 100 * 0.25;
            m3 = (tnom - 400) * 0.20;
            totalTempatan = (m1 + m2 + m3);
            cout << "Jumlah panggilan tempatan : RM" << totalTempatan << endl;
        }
        else if (tnom > 500)
        {
            m1 = 100 * 0.30;
            m2 = 100 * 0.25;
            m3 = 100 * 0.20;
            m4 = (tnom - 500) * 0.10;
            totalTempatan = (m1 + m2 + m3 + m4);
            cout << "Jumlah panggilan tempatan : RM" << totalTempatan << endl;
        }
    }
}

void jumlahAntarabangsa(int &anom)
{
    double m1, m2, m3, m4, tax;
    if (anom <= 100)
    {
        m1 = anom * 0.60;
        totalAntarabangsa = m1;
        cout << "Jumlah panggilan antarabangsa : RM" << totalAntarabangsa << endl;
    }
    else if (anom <= 200)
    {
        m1 = 100 * 0.60;
        m2 = (anom - 100) * 0.55;
        totalAntarabangsa = m1 + m2;
        cout << "Jumlah panggilan antarabangsa : RM" << totalAntarabangsa << endl;
    }
    else if (anom <= 500)
    {
        m1 = 100 * 0.60;
        m2 = 100 * 0.55;
        m3 = (anom - 400) * 0.50;
        totalAntarabangsa = (m1 + m2 + m3);
        cout << "Jumlah panggilan antarabangsa : RM" << totalAntarabangsa << endl;
    }
    else if (anom > 500)
    {
        m1 = 100 * 0.60;
        m2 = 100 * 0.55;
        m3 = 100 * 0.50;
        m4 = (anom - 500) * 0.40;
        totalAntarabangsa = (m1 + m2 + m3 + m4);
        cout << "Jumlah panggilan antarabangsa : RM" << totalAntarabangsa << endl;
    }
}

void jumlahKeseluruhan()
{
    double jumlah = totalAntarabangsa + totalTempatan;
    cout << "jumlah keseluruhan: RM" << jumlah;
}

int main()
{
    int tnom, anom, jumlah, totalAntarabangsa, totalTempatan;
    nilaiTempatan(tnom, anom);
    jumlahTempatan(tnom, selection);
    jumlahAntarabangsa(anom);
    jumlahKeseluruhan();
}