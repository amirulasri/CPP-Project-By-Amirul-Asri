#include <iostream>
#include <string.h>
using namespace std;

const int saiz = 20;

void papar(int a[]){
    for (int i = 0; i < saiz; i++)
    {
        if (a[i] != 0)
        {
            cout << "Nombor: " << a[i] << endl;
        }
    }
}

void input(int a[])
{
    for (int i = 0; i < saiz; i++)
    {
        int input;
        cout << "Masukkan nombor: ";
        cin >> input;
        if(input != 0){
            a[i] = input;
        }else{
            break;
        }
    }
}

int main()
{
    int a[saiz] = {0};
    input(a);
    papar(a);
}