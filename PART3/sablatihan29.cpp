#include <iostream>
#include <iomanip>
using namespace std;

string getstatus(int number)
{
    string status = "";
    if (number >= 0)
    {
        status = "Positif";
    }
    else
    {
        status = "Negatif";
    }

    return status;
}

void display(int numberarray[])
{
    const char separator = ' ';
    const int arraynumwidth = 8;
    const int statuswidth = 15;

    int countpositif = 0;
    int countnegatif = 0;

    cout << endl;
    cout << left << setw(arraynumwidth) << setfill(separator) << "Input"
         << "|";
    cout << left << setw(statuswidth) << setfill(separator) << "Status" << endl;
    for (int i = 0; i < 20; i++)
    {
        if (numberarray[i] != 0)
        {
            cout << left << setw(arraynumwidth) << setfill(separator) << numberarray[i] << "|";
            cout << left << setw(statuswidth) << setfill(separator) << getstatus(numberarray[i]) << endl;
            if (getstatus(numberarray[i]) == "Positif")
            {
                countpositif++;
            }
            else
            {
                countnegatif++;
            }
        }
    }
    cout << "\nBilangan nombor positif adalah: " << countpositif << endl;
    cout << "Bilangan nombor negatif adalah: " << countnegatif << endl;
}

void tetapkannilaiarraykosong(int *&numberarray)
{
    fill_n(numberarray, 20, 0);
}

int *inputnumber()
{
    static int *numberarray = new int[20];
    tetapkannilaiarraykosong(numberarray);

    int count = 0; // AKAN BERTAMBAH SETIAP KALI ULANGAN WHILE LOOP sehingga 20
    bool kebenaran = true;
    while ((count < 20) && (kebenaran == true))
    {
        cout << "Masukkan nombor(0) untuk berhenti: ";
        cin >> numberarray[count];
        if (numberarray[count] == 0)
        {
            kebenaran = false;
        }
        count++;
    }
    return numberarray;
}

int main()
{
    bool keadaan = true;
    while (keadaan)
    {
        int *numberarray;
        numberarray = inputnumber();
        display(numberarray);

        string inputulang ;
        cout << "Adakah anda hendak mencuba sekali lagi (Y/N): ";
        cin >> inputulang;
        if(inputulang == "y" || inputulang == "Y"){
            keadaan = true;
        }else{
            keadaan = false;
        }
    }
}