#include <iostream>
using namespace std;

int main()
{
    int namaarray[7];
    int sizearray = (sizeof(namaarray) / sizeof(*namaarray));
    cout << sizearray;
}