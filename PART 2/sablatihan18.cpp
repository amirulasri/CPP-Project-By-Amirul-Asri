#include <iostream>
using namespace std;

int nombormaksimum = 4;

void masuknilai(int &num)
{
    cout << "Masukkan nombor integer ( maksimum " << nombormaksimum << " nombor):";
    cin >> num;
}

void nilaiPositif2(int &num)
{
    bool keadaanloop = true;
    while (keadaanloop)
    {
        if(num < 0){
            cout << "Nombor yang anda masuk adalah negatif. masukkan semula";
            cout << "\nMasukkan semula: ";
            cin >> num;
        }
        else if (num < 1000)
        {
            cout << "Nombor yang anda masuk kurang 4 digit. masukkan semula";
            cout << "\nMasukkan semula: ";
            cin >> num;
        }
        else if (num > 9999)
        {
            cout << "Nombor yang anda masukkan melebihi 4 digit.";
            cout << "\nMasukkan semula: ";
            cin >> num;
        }
        else
        {
            keadaanloop = false;
        }
    }
}

void nilaiPositif3(int &num)
{
    int x, y, z, v;
    if (num >= 100 && num >= 1000)
    {
        x = num % 10;
        y = num / 10 % 10;
        z = num / 100 % 10;
        v = num / 1000 % 10;
        cout << v << endl
             << z << endl
             << y << endl
             << x << endl;
    }
}

int main()
{
    int num;
    masuknilai(num);
    nilaiPositif2(num);
    nilaiPositif3(num);
}