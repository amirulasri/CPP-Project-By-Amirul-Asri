#include <cstdlib>
#include <iostream>
#include <locale>
#include <string>
using namespace std;

struct my_facet : public numpunct<char>
{
    explicit my_facet(size_t refs = 0) : numpunct<char>(refs) {}
    virtual char do_thousands_sep() const { return ','; }
    virtual string do_grouping() const { return "\003"; }
};

void tambahKomadanPaparkan(double Nom)
{
    locale global;
    locale withgroupings(global, new my_facet);
    locale was = cout.imbue(withgroupings);
    cout << "\nNombor dengan koma: " << Nom;
}

void periksaSaizNombor(double cekNumber)
{
    if (cekNumber >= 1000)
    {
        if (cekNumber <= 1000000)
        {
            // if ((cekNumber % 2) == 0)
            // {
            // }
            // else
            // {
            //     cout << "\nNombor yang anda masukkan mempunyai perpuluhan";
            //     exit(EXIT_SUCCESS);
            // }
        }
        else
        {
            cout << "\nNombor yang anda masukkan lebih daripada 1000000";
            exit(EXIT_SUCCESS);
        }
    }
    else
    {
        cout << "\nNombor yang anda masukkan kurang daripada 1000";
        exit(EXIT_SUCCESS);
    }
}

double inputNombor()
{
    double inputNo;
    cout << "Masuk Nombor integer : ";
    cin >> inputNo;
    return inputNo;
}

int main()
{
    double Nom;
    Nom = inputNombor();
    periksaSaizNombor(Nom);
    tambahKomadanPaparkan(Nom);
}