#include <iostream>
#include <cstring>
using namespace std;
//OLEH SEBAB PENGGUNAAN GLOBAL VARIABLE, BEBERAPA FUNGSI RETURN TIDAK DIPERLUKAN
int nombormaksimum = 4;
int inputnombor = 0;
string nomborstring = "";

void tukarkechar(){
    //DAPATKAN BILANGAN HURUF DALAM STRING
    int bilanganhuruf = nomborstring.length();
    //WUJUDKAN PEMBOLEH CHAR ARRAY UNTUK SETIAP HURUF
    char setiaphuruf[bilanganhuruf + 1];

    //SALIN NOMBOR STRING KE DALAM ARRAY CHAR
    strcpy(setiaphuruf, nomborstring.c_str());

    for(int i=0; i < nombormaksimum; i++){
        cout << setiaphuruf[i] << endl;
    }

}

void tukarkestring(){
    nomborstring = to_string(inputnombor);
}

void masukkannombor(){
    cout << "Masukkan nombor integer (maksimum "<< nombormaksimum <<" nombor): ";
    cin >> inputnombor;

    //DAPATKAN BILANGAN NOMBOR
    string stringbilangannombor = to_string(inputnombor);
    int bilangannombor = stringbilangannombor.length();

    if(bilangannombor > 4){
        cout << "\nNombor yang anda masukkan melebihi 4 digit!";
        exit(EXIT_SUCCESS);
    }
}

void prosestukarjenisdata(){
    //TUKAR KE STRING
    tukarkestring();
    tukarkechar();
}

int main()
{
    masukkannombor();
    prosestukarjenisdata();
    return 0;
}