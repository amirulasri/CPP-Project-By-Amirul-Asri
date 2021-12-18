// Atur Cara gunakan kaedah Worked Examples
// Yahya Ibrahim dan Syahmirul Afiq Bin Gafar, FTMK, UTeM
#include <iostream>
using namespace std;
int inputNumber()
{
    int getNum;                 // isytihar pemboleh ubah jenis integer
    cout << "Enter a number: "; // prom tetap
    cin >> getNum;              // user input satu nilai ke dalam p/ubah
    return getNum;              // pulangkan nilai dalam getNum ke fungsi inputNumber
}

char checkSignOfNumber(int checkNum)
{
    char signOfNumber; // isytihar pemboleh ubah jenis aksara
    if (checkNum > 0)  // periksa jika nilai positif
    {
        signOfNumber = '+'; // umpukan nilai dalam p/ubah
    }
    else if (checkNum == 0) // periksa jika nilai kosong (0)
    {
        signOfNumber = '0'; // umpukan nilai dalam p/ubah
    }
    else // dilarikan apabila penyataan di atas salah
    {
        signOfNumber = '-'; // umpukan nilai dalam p/ubah
    }
    return signOfNumber; // pulangkan nilai pemboleh ubah, signOfNumber ke fungsi checkSignOfNumber
}

void displayResult(char numSign) // fungsi dengan 1parameter
{
    if (numSign == '+') // periksa jika nilai positif
    {
        cout << "The entered number is positive." << endl; //paparkan teks tetap
    }
    else if (numSign == '0') // periksa jika nilai sifar (0)
    {
        cout << "The entered number is zero." << endl; //paparkan teks tetap
    }
    else if (numSign == '-') // memeriksa nilai negatif (-)
    {
        cout << "The entered number is negative." << endl; // paparkan teks tetap
    }
}

int main()
{                                    // gabungkan kepala fungsi utama + permulaan
    int num;                         // isytihar pemboleh ubah jenis integer
    char result;                     // isytihar pemboleh ubah jenis aksara
    num = inputNumber();             // memanggil fungsi inputNumber, terima nilai dan simpan di dalam num
    result = checkSignOfNumber(num); // memanggil fungsi cehckSignOfNumber, terima nilai dan simpan di dalam result
    displayResult(num);              // memanggil fungsi displayResult untuk outputkan teks tetap yang sesuai dengan syarat
} // akhir fungsi utama
