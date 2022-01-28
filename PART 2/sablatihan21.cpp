#include <iostream>
using namespace std;
double international, local, pilihan;
void nilaiTempatan(int &tempatan, int &antarabangsa)
{
    cout << "Bilangan minit untuk panggilan tempatan:";
    cin >> tempatan;
    cout << "Mobile ke mobile (1) Mobile ke talian tetap (2): ";
    cin >> pilihan;
    cout << "Bilangan minit untuk panggilan Antarabangsa:";
    cin >> antarabangsa;
    if (tempatan < 0 || antarabangsa < 0)
    {
        cout << "Nilai yang anda masukkan negatif";
        exit(EXIT_FAILURE);
    }
}

void jumlahTempatan(int &tempatan, int pilihan)
{
    double minit1, minit2, minit3, minit4, tax;
    if (pilihan == 1)
    {
        if (tempatan <= 100)
        {
            minit1 = tempatan * 0.50;
            local = minit1;
            cout << "Jumlah panggilan tempatan : RM" << local << endl;
        }
        else if (tempatan <= 200)
        {
            minit1 = 100 * 0.50;
            minit2 = (tempatan - 100) * 0.45;
            local = minit1 + minit2;
            cout << "Jumlah panggilan tempatan : RM" << local << endl;
        }
        else if (tempatan <= 500)
        {
            minit1 = 100 * 0.50;
            minit2 = 100 * 0.45;
            minit3 = (tempatan - 400) * 0.40;
            local = (minit1 + minit2 + minit3);
            cout << "Jumlah panggilan tempatan : RM" << local << endl;
        }
        else if (tempatan > 500)
        {
            minit1 = 100 * 0.50;
            minit2 = 100 * 0.45;
            minit3 = 100 * 0.40;
            minit4 = (tempatan - 500) * 0.30;
            local = (minit1 + minit2 + minit3 + minit4);
            cout << "Jumlah panggilan tempatan : RM" << local << endl;
        }
    }else if(pilihan == 2){
        if (tempatan <= 100)
        {
            minit1 = tempatan * 0.30;
            local = minit1;
            cout << "Jumlah panggilan tempatan : RM" << local << endl;
        }
        else if (tempatan <= 200)
        {
            minit1 = 100 * 0.30;
            minit2 = (tempatan - 100) * 0.25;
            local = minit1 + minit2;
            cout << "Jumlah panggilan tempatan : RM" << local << endl;
        }
        else if (tempatan <= 500)
        {
            minit1 = 100 * 0.30;
            minit2 = 100 * 0.25;
            minit3 = (tempatan - 400) * 0.20;
            local = (minit1 + minit2 + minit3);
            cout << "Jumlah panggilan tempatan : RM" << local << endl;
        }
        else if (tempatan > 500)
        {
            minit1 = 100 * 0.30;
            minit2 = 100 * 0.25;
            minit3 = 100 * 0.20;
            minit4 = (tempatan - 500) * 0.10;
            local = (minit1 + minit2 + minit3 + minit4);
            cout << "Jumlah panggilan tempatan : RM" << local << endl;
        }
    }
}

void jumlahAntarabangsa(int &antarabangsa)
{
    double minit1, minit2, minit3, minit4, tax;
    if (antarabangsa <= 100)
    {
        minit1 = antarabangsa * 0.60;
        international = minit1;
        cout << "Jumlah panggilan antarabangsa : RM" << international << endl;
    }
    else if (antarabangsa <= 200)
    {
        minit1 = 100 * 0.60;
        minit2 = (antarabangsa - 100) * 0.55;
        international = minit1 + minit2;
        cout << "Jumlah panggilan antarabangsa : RM" << international << endl;
    }
    else if (antarabangsa <= 500)
    {
        minit1 = 100 * 0.60;
        minit2 = 100 * 0.55;
        minit3 = (antarabangsa - 400) * 0.50;
        international = (minit1 + minit2 + minit3);
        cout << "Jumlah panggilan antarabangsa : RM" << international << endl;
    }
    else if (antarabangsa > 500)
    {
        minit1 = 100 * 0.60;
        minit2 = 100 * 0.55;
        minit3 = 100 * 0.50;
        minit4 = (antarabangsa - 500) * 0.40;
        international = (minit1 + minit2 + minit3 + minit4);
        cout << "Jumlah panggilan antarabangsa : RM" << international << endl;
    }
}

void jumlahKeseluruhan()
{
    double jumlah = international + local;
    cout << "jumlah keseluruhan: RM" << jumlah;
}

int main()
{
    int tempatan, antarabangsa, jumlah, international, local;
    nilaiTempatan(tempatan, antarabangsa);
    jumlahTempatan(tempatan, pilihan);
    jumlahAntarabangsa(antarabangsa);
    jumlahKeseluruhan();
}