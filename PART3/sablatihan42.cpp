#include <iostream>
using namespace std;

void input (string a[][2])
{
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cout<<"Masukkan nama buku :";
            cin>>a[i][j]; //0 0 ali book
            cout<<"Masukkan kuantiti buku :";
            cin>>a[i][j]; //0 0 24
        }
    }
}

void displayline(int a)
{
    for(int i=0; i<a; i++)
    {
        cout<<"-";
    }
}

void kira(string b[][2])
{
    int total=0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            total = total + stoi(b[i][j]);
        }
    }
    cout<<"JUMLAH KUANTITI BUKU PINJAM :"<<total;
}

int main()
{
    string saiz[2][2];
    input(saiz);
    displayline(20);
    kira(saiz);
}