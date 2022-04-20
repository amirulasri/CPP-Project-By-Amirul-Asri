#include <iostream>
using namespace std;

const int baris = 2;
const int lajur = 4;
string namakereta[baris][lajur] = {
    {"Produa Axia",
    "Mini car",
    "Petrol",
    "78000"}, 
    
    {"Toyota", 
    "Sedan", 
    "Electric", 
    "85000"}
};

void papardata(){
    cout << "Car brand : " << namakereta[0][0] << endl;
    cout << "Car type : " << namakereta[0][1] << endl;
    cout << "Car fuel source : " << namakereta[0][2] << endl;
    cout << "Car price : " << namakereta[0][3] << endl;
    cout << "****************" << endl << endl;

    cout << "Car brand : " << namakereta[1][0] << endl;
    cout << "Car type : " << namakereta[1][1] << endl;
    cout << "Car fuel source : " << namakereta[1][2] << endl;
    cout << "Car price : " << namakereta[1][3] << endl;
    cout << "****************" << endl ;
}

int main()
{
    papardata();
}