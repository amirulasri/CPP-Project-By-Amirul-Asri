#include <iostream>
using namespace std;

int main(){
    const int size = 20;
    int nombor[size];

    cout << "Masukkan 20 nombor" << endl << endl;

    //INPUT
    for (int i = 0; i < size; i++)
    {
        cout << "Masukkan nombor " << (i+1) << ": ";
        cin >> nombor[i];
    }

    int countpositif = 0;
    int countnegatif = 0;
    int countodd = 0;
    int counteven = 0;
    int countzero = 0;

    //KIRA 
    for (int i = 0; i < size; i++)
    {
        //Nombor positif
        if(nombor[i] > 0){
            countpositif = countpositif + 1;
        }

        //Negatif
        if(nombor[i] < 0){
            countnegatif = countnegatif + 1;
        }

        //ODD
        if(nombor[i] %2 != 0){
            countodd = countodd + 1;
        }

        //EVEN
        if(nombor[i] %2 == 0){
            counteven = counteven + 1;
        }

        //ZERO
        if(nombor[i] == 0){
            countzero = countzero + 1;
        }

    }

    cout << "Nombor positif: " << countpositif << "\n";
    cout << "Nombor negatif: " << countnegatif << "\n";
    cout << "Nombor odd: " << countodd << "\n";
    cout << "Nombor even: " << counteven << "\n";
    cout << "Nombor zero: " << countzero << "\n";
}