#include <iostream>
using namespace std;

int nombormaksimum = 4;

void masuknilai(int &num)
{
    cout << "masukkan nombor:";
    cin >> num;

    string stringbilangannombor = to_string(num);
    int bilangannombor = stringbilangannombor.length();

    bool keadaanloop = true;
    while (keadaanloop)
    {
        if (bilangannombor > 4)
        {
            cout << "\nNombor yang anda masukkan melebihi 4 digit. Masukkan semula";
            cout << "\nmasukkan nombor:";
            cin >> num;

            stringbilangannombor = to_string(num);
            bilangannombor = stringbilangannombor.length();
        }
        else
        {
            keadaanloop = false;
        }
    }
}

void nilaiPositif2(int &num)
{
    int x, y, z;
    bool keadaanloop = true;
    while (keadaanloop)
    {
        if (num >= 1 && num <= 1000)
        {
            cout << "\nNombor yang anda masuk kurang 4 digit. Masukkan semula";
            cout << "\nmasukkan nombor:";
            cin >> num;
        }else{
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