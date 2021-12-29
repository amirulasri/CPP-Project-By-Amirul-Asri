#include <iostream>
using namespace std;

void inputNombor(int &Nom)
{
    cout << "Masukkan Nombor:";
    cin >> Nom;
}

void inputpertama(int &Nom)
{
    int a, b, c, d, e, f;
    if (Nom > 1000 && Nom < 10000)
    {
        a = Nom % 10;
        b = Nom / 10 % 10;
        c = Nom / 100 % 10;
        d = Nom / 1000 % 10;
        cout << d << "," << c << b << a;
    }
    else if (Nom > 1000 && Nom < 100000)
    {
        a = Nom % 10;
        b = Nom / 10 % 10;
        c = Nom / 100 % 10;
        d = Nom / 1000 % 10;
        e = Nom / 10000 % 10;
        cout << e << "," << d << c << b << a;
    }
    else if (Nom > 1000 && Nom < 1000000)
    {
        a = Nom % 10;
        b = Nom / 10 % 10;
        c = Nom / 100 % 10;
        d = Nom / 1000 % 10;
        e = Nom / 10000 % 10;
        f = Nom / 100000 % 10;
        cout << f << "," << e << d << c << b << a;
    }
    else
    {
        cout << "Nomboh anda terlebih had" << endl;
    }
}

int main()
{
    int Nom;
    inputNombor(Nom);
    inputpertama(Nom);
}