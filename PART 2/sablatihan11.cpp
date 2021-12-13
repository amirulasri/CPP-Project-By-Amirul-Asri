#include <iostream>

using namespace std;

int inputNumber ()
{
    int iNumber;
    cin>>iNumber;
    return iNumber;
}

int inputHarga()
{
    int iHarga;
    cin>>iHarga;
    return iHarga;
}

int calculate_ticketclass(int num, int harga)
{
    int ticket;
    ticket = num * harga;
    return ticket;
}


int main ()

{
    int num , harga,jumlah,ticket;
    cout<<"Please key-in number of ticket for first class:";
    num = inputNumber();
    cout<<"Please key-in price of ticket for first class: RM ";
    harga = inputHarga(); 
    jumlah = calculate_ticketclass(num,harga);
    cout<<"Total price of first class is RM "<<num<<"x"<<harga<<"="<<jumlah<<endl;
    cout<<"Please key-in number of ticket for secound class:";
    num = inputNumber();
    cout<<"Please key-in price of ticket for secound class: RM ";
    harga = inputHarga();
   

}