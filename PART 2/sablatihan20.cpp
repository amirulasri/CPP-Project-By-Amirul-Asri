#include <iostream>
using namespace std;
void jumlahkeseluruhan(double jumlahbiltempatan, double jumlahbilantarabangsa)
{
    double hasil = jumlahbiltempatan + jumlahbilantarabangsa;
    cout << "Jumlah keseluruhan: RM " << hasil;
}

double kiraminitantarabangsa(double bilminitantarabangsa)
{
    //DAPATKAN MINIT PERTAMA
    double bakiminittinggal = bilminitantarabangsa;
    double duaratusminitpertama = 200;
    double seratusminitkedua = 100;
    double hasilminitpertama = 0;
    double hasilminitkedua = 0;
    double hasilminitselebihnya = 0;

    if (bakiminittinggal > 200)
    {
        hasilminitpertama = duaratusminitpertama * 0.30;
        bakiminittinggal = bakiminittinggal - duaratusminitpertama;

        if (bakiminittinggal > 100)
        {
            hasilminitkedua = seratusminitkedua * 0.28;
            if (bakiminittinggal > seratusminitkedua)
            {
                bakiminittinggal = bakiminittinggal - seratusminitkedua;
            }
            else
            {
                bakiminittinggal = seratusminitkedua - bakiminittinggal;
            }
            hasilminitselebihnya = bakiminittinggal * 0.25;
        }
        else
        {
            hasilminitkedua = bakiminittinggal * 0.28;
        }
    }
    else
    {
        hasilminitpertama = bakiminittinggal * 0.30;
    }

    //PENGIRAAN AKHIR UNTUK MINIT SELEBIHNYA

    //KEMUDIAN TAMBAH KESEMUANYA
    double hasilakhirantarabangsa = hasilminitpertama + hasilminitkedua + hasilminitselebihnya;

    //PAPARKAN KE SKRIN
    cout << "Jumlah panggilan antarabangsa: RM " << hasilakhirantarabangsa << endl;
    return hasilakhirantarabangsa;
}

double kiraminittempatan(double bilminittempatan)
{
    //DAPATKAN MINIT PERTAMA
    double bakiminittinggal = bilminittempatan;
    double seratusminitpertama = 100;
    double seratusminitkedua = 100;
    double hasilminitpertama = 0;
    double hasilminitkedua = 0;
    double hasilminitselebihnya = 0;

    if (bakiminittinggal > 100)
    {
        hasilminitpertama = seratusminitpertama * 0.10;
        bakiminittinggal = bakiminittinggal - seratusminitpertama;

        if (bakiminittinggal > 100)
        {
            hasilminitkedua = seratusminitkedua * 0.09;
            if (bakiminittinggal > seratusminitkedua)
            {
                bakiminittinggal = bakiminittinggal - seratusminitkedua;
            }
            else
            {
                bakiminittinggal = seratusminitkedua - bakiminittinggal;
            }
            hasilminitselebihnya = bakiminittinggal * 0.08;
        }
        else
        {
            hasilminitkedua = bakiminittinggal * 0.09;
        }
    }
    else
    {
        hasilminitpertama = bakiminittinggal * 0.10;
    }

    //PENGIRAAN AKHIR UNTUK MINIT SELEBIHNYA

    //KEMUDIAN TAMBAH KESEMUANYA
    double hasilakhirtempatan = hasilminitpertama + hasilminitkedua + hasilminitselebihnya;

    //PAPARKAN KE SKRIN
    cout << "Jumlah panggilan tempatan: RM " << hasilakhirtempatan << endl;
    return hasilakhirtempatan;
}

int dapatkaninputminitantarabangsa()
{
    int bilminitantarabangsa;
    cout << "Bilangan minit untuk panggilan antarabangsa: ";
    cin >> bilminitantarabangsa;
    return bilminitantarabangsa;
}

int dapatkaninputminittempatan()
{
    int bilminittempatan;
    cout << "Bilangan minit untuk panggilan tempatan: ";
    cin >> bilminittempatan;
    return bilminittempatan;
}

int main()
{
    //SET FOR 2 DECIMAL PLACE EVERY NUMBERS
    cout.setf(ios::fixed);
    cout.precision(2);
    int bilminittempatan = 0;
    int bilminitantarabangsa = 0;

    double jumlahbiltempatan, jumlahbilantarabangsa;

    bilminittempatan = dapatkaninputminittempatan();
    bilminitantarabangsa = dapatkaninputminitantarabangsa();

    jumlahbiltempatan = kiraminittempatan(bilminittempatan);
    jumlahbilantarabangsa = kiraminitantarabangsa(bilminitantarabangsa);

    jumlahkeseluruhan(jumlahbiltempatan, jumlahbilantarabangsa);
}