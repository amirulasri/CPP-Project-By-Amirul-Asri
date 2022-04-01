#include <iostream>

using namespace std;
// 0, 1, 2....
void input(float b[])
{
    string name[3] = {"sewa", "makan", "travel"};
    for (int i = 0; i < 3; i++)
    {
        cout << "Masukkan belanja " << name[i] << ":";
        cin >> b[i];
    }
}

float kira(float a[])
{
    float jumlah = 0;
    int x = 0;

    for (int x = 0; x < 3; x++)
    {
        jumlah = jumlah + a[x];
    }
    return jumlah;
}

void output(float b[])
{
    string name[3] = {"sewa", "makan", "travel"};
    for (int i = 0; i < 3; i++)
    {
        cout << "Output belanja " << name[i] << ":";
        cout << b[i];
    }
    cout << endl;
    cout << "jumlah makan dan sewa:" << b[0] + b[1] << endl;
}

int main()
{

    float belanja[3], jumlah;
    input(belanja);
    jumlah = kira(belanja);
    output(belanja);
    cout << "Jumlah pembelanjaan ialah RM:" << jumlah;
}