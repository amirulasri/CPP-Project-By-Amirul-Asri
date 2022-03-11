#include <iostream>
using namespace std;

double kiraantarabangsa(double minit)
{
    double jumlah;
    if (minit <= 100)
    {
        double caj = minit * 0.60;
        jumlah = caj + (caj * 0.10);
    }
    else if (minit > 100 && minit <= 200)
    {
        double caj = minit * 0.55;
        jumlah = caj + (caj * 0.08);
    }
    else if (minit > 200 && minit <= 500)
    {
        double caj = minit * 0.50;
        jumlah = caj + (caj * 0.06);
    }
    else if (minit > 500)
    {
        double caj = minit * 0.40;
        jumlah = caj;
    }
    return jumlah;
}

double kiratempatanmobileketaliantetap(double minit)
{
    double jumlah;
    if (minit <= 100)
    {
        double caj = minit * 0.30;
        jumlah = caj + (caj * 0.03);
    }
    else if (minit > 100 && minit <= 200)
    {
        double caj = minit * 0.25;
        jumlah = caj + (caj * 0.02);
    }
    else if (minit > 200 && minit <= 500)
    {
        double caj = minit * 0.20;
        jumlah = caj + (caj * 0.01);
    }
    else if (minit > 500)
    {
        double caj = minit * 0.10;
        jumlah = caj;
    }
    return jumlah;
}

double kiratempatanmobilekemobile(double minit)
{
    double jumlah;
    if (minit <= 100)
    {
        double caj = minit * 0.50;
        jumlah = caj + (caj * 0.08);
    }
    else if (minit > 100 && minit <= 200)
    {
        double caj = minit * 0.45;
        jumlah = caj + (caj * 0.07);
    }
    else if (minit > 200 && minit <= 500)
    {
        double caj = minit * 0.40;
        jumlah = caj + (caj * 0.06);
    }
    else if (minit > 500)
    {
        double caj = minit * 0.30;
        jumlah = caj + (caj * 0.05);
    }
    return jumlah;
}

int main()
{
    int pilihan1, pilihan2, minitpanggilan;

    bool keadaan = true;
    while (keadaan == true)
    {
        cout << "\n\n---------Kira Caj Telefon--------" << endl;
        cout << "Pilih Antarabangsa-(1) Tempatan-(2): ";
        cin >> pilihan1;
        if (pilihan1 == 1)
        {
            cout << "Masukkan minit panggilan: ";
            cin >> minitpanggilan;
            if (minitpanggilan > 0)
            {
                double caj = kiraantarabangsa(minitpanggilan);
                cout << "Caj dikenakan untuk panggilan antarabangsa: RM " << caj;
                keadaan = false;
            }
            else
            {
                cout << "Masukkan nilai positif";
                keadaan = true;
            }
        }
        else if (pilihan1 == 2)
        {
            cout << "Jenis panggilan: Mobile Ke Mobile-(1)  Mobile Ke Talian Tetap-(2): ";
            cin >> pilihan2;
            if (pilihan2 == 1)
            {
                cout << "Masukkan minit panggilan: ";
                cin >> minitpanggilan;
                if (minitpanggilan > 0)
                {
                    double caj = kiratempatanmobilekemobile(minitpanggilan);
                    cout << "Caj dikenakan untuk panggilan tempatan (Mobile Ke Mobile): RM " << caj;
                    keadaan = false;
                }
                else
                {
                    cout << "Masukkan nilai positif";
                    keadaan = true;
                }
            }
            else if (pilihan2 == 2)
            {
                cout << "Masukkan minit panggilan: ";
                cin >> minitpanggilan;
                if (minitpanggilan > 0)
                {
                    double caj = kiratempatanmobileketaliantetap(minitpanggilan);
                    cout << "Caj dikenakan untuk panggilan tempatan (Mobile Ke Talian Tetap): RM " << caj;
                    keadaan = false;
                }
                else
                {
                    cout << "Masukkan nilai positif";
                    keadaan = true;
                }
            }
        }
    }
}