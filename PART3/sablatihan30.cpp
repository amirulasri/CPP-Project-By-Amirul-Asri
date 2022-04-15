#include <iostream>

    using namespace std;

void input(int nom[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "SILA MASUKKAN NOMBOR :";
        cin >> nom[i];
    }
}

void total(int jum[])
{
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total = total + jum[i];
    }
    cout << "Total :" << total << endl;
}

int main()
{
    int size[3];
    input(size);
    total(size);
}