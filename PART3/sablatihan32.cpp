#include <iostream>

using namespace std;

string nama[] = {"math", "sc", "sej"};

void gred(int markah)
{
    if (markah > 79)
    {
        cout << "A";
    }
    else if (markah < 79)
    {
        cout << "B";
    }
}

void input(int a[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << "Markah subjet " << nama[i] << " adalah: ";
        cin >> a[i];
    }
    cout << "Paparkan gred :" << endl;
    for (int i = 0; i < 3; i++)
    {

        cout << " Gred " << nama[i] << ":" << a[i];
        gred(a[i]);
    }
}

int main()
{
    int saiz[3];
    input(saiz);
}