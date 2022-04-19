#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
const int baris = 2;
const int lajur = 2;

string murid[] = {"Pelajar 1", "Pelajar 2"}; // label kan dia i(baris)
string kos[] = {"ECO", "ACC"};               // label kan dia s(lajur)

void input(int N[][lajur])
{
    for (int i = 0; i < baris; i++)
    {
        for (int s = 0; s < lajur; s++)
        {
            cout << "Sila masukkan markah peperiksaan " << kos[s] << " bagi " << murid[i] << " :";
            cin >> N[i][s];
        }
    }
}

void displayline(int L)
{
    cout << "\t";
    for (int i = 0; i < L; i++)
    {
        cout << "-";
    }
    cout << endl;
}

void outputS()
{
    cout << " \t\t ";
    for (int s = 0; s < lajur; s++)
    {
        cout << "     " << kos[s];
    }
    cout << endl;
}

void gred(int markah)
{
    if (markah > 70 && markah <= 100)
    {
        cout << "A"
             << "|";
    }
    else if (markah >= 60 && markah <= 70)
    {
        cout << "B"
             << "|";
    }
    else if (markah >= 50 && markah < 60)
    {
        cout << "C"
             << "|";
    }
    else if (markah >= 40 && markah < 50)
    {
        cout << "D"
             << "|";
    }
    else if (markah <= 39)
    {
        cout << "F"
             << "|";
    }
}

void outputP(int P[][lajur])
{
    int total = 0;
    for (int i = 0; i < baris; i++)
    {
        cout << "\t" << murid[i] << "|";
        for (int s = 0; s < lajur; s++)
        {
            cout << setw(6) << P[i][s];
            gred(P[i][s]);
            total += P[i][s];
        }
        cout << "   " << total;
        cout << endl;
    }
}

void kedudukan(int T[][lajur])
{
    int tinggi1 = 0;
    int who1 = 0;
    int tinggi2 = 100;
    int who2 = 0;
    for (int i = 0; i < baris; i++)
    {
        for (int s = 0; s < lajur; s++)
        {
            if (s == 0)
            {
                if (tinggi1 <= T[i][s])
                {
                    tinggi1 = T[i][s];
                    who1 = i;
                }
                if (tinggi2 >= T[i][s])
                {
                    tinggi2 = T[i][s];
                    who2 = i;
                }
            }
        }
    }
    cout << endl;
    cout << "Markah paling tinggi untuk ECO : " << tinggi1 << endl;
    cout << murid[who1] << " memperolehi markah tertinggi ECO." << endl;
    cout << "Markah paling rendah untuk ECO : " << tinggi2 << endl;
    cout << murid[who2] << " memperolehi markah tertinggi ECO." << endl;
}
int main()
{
    int saiz[baris][lajur];
    input(saiz);
    displayline(35);
    outputS();
    outputP(saiz);
    kedudukan(saiz);
}