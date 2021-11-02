#include <iostream>
#include <math.h>
using namespace std;

long gcd(long a, long b)
{
    if (a == 0)
        return b;
    else if (b == 0)
        return a;

    if (a < b)
        return gcd(a, b % a);
    else
        return gcd(b, a % b);
}

void papardalampecahan(double input)
{
    double integral = floor(input);
    double frac = input - integral;

    const long precision = 1000000000; // This is the accuracy.

    long gcd_ = gcd(round(frac * precision), precision);

    long denominator = precision / gcd_;
    long numerator = round(frac * precision) / gcd_;

    cout << "Hasil darab pecahan: ";
    cout << numerator << "/" << denominator;
    cout << " (" << input <<")";
}

double kira(double pecahan1, double pecahan2){
    double hasil;
    hasil = pecahan1 * pecahan2;
    return hasil;
}

double dapatkanpecahan2(){
    double penyebut2, pembilang2;
    cout << "---- Pecahan Kedua ----\n";
    cout << "Masukkan pembilang kedua (x/2): ";
    cin >> pembilang2;
    cout << "Masukkan penyebut kedua (2/x): ";
    cin >> penyebut2;
    cout << "------------------------\n\n";
    double pecahan2 = (pembilang2/penyebut2);
    return pecahan2;
}

double dapatkanpecahan1(){
    double penyebut1, pembilang1;
    cout << "---- Pecahan Pertama ----\n";
    cout << "Masukkan pembilang pertama (x/2): ";
    cin >> pembilang1;
    cout << "Masukkan penyebut pertama (2/x): ";
    cin >> penyebut1;
    cout << "------------------------\n\n";
    double pecahan1 = (pembilang1/penyebut1);
    return pecahan1;
}

int main (){
    double pecahan1, pecahan2, hasilpecahan;
    pecahan1 = dapatkanpecahan1();
    pecahan2 = dapatkanpecahan2();
    hasilpecahan = kira(pecahan1, pecahan2);
    papardalampecahan(hasilpecahan);
}