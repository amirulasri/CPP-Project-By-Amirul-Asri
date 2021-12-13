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

int total_price(int jumlah1,int jumlah2,int jumlah3)
{
    int total;
    total = jumlah1 + jumlah2 + jumlah3;
    return total;
}

int diskaunticket ()
{
    int diskaun;
    cin>>diskaun;
    return diskaun;
}

double total_Ticket(int tambah,double dis)
{
    double tolTic;
    double grandtol;
    tolTic = tambah * dis / 100;
    grandtol = tambah - tolTic;
    cout<<"Total ticket ="<<tambah<<" – Discount"<<"("<<dis<<")"<<"="<<tolTic<<"  "<<"Grand Total = RM"<<grandtol<<endl;
    return grandtol;
    
}

void amountCus(double &grandtol)
{
    cout << grandtol;
    double amount, balance;
    cout<<"Please key-in amount paid by customer:RM";
    cin>>amount;
    balance = (amount - grandtol);
    cout<<"Balance to be returned to customer is:RM"<<balance<<endl;
}


int main ()

{
    int num , harga,tambah, dis;
    double total,tolTic,grandtol,amount,balance;
    
    cout<<"Please key-in number of ticket for first class:";
    num = inputNumber();
    
    cout<<"Please key-in price of ticket for first class: RM ";
    harga = inputHarga(); 
    
    int jumlah1;
    jumlah1 = calculate_ticketclass(num,harga);
    cout<<"Total price of first class is RM "<<num<<"x"<<harga<<"="<<jumlah1<<endl;
  
    
    cout<<"Please key-in number of ticket for secound class:";
    num = inputNumber();
    
    cout<<"Please key-in price of ticket for secound class: RM ";
    harga = inputHarga();
    
    int jumlah2;
    jumlah2 = calculate_ticketclass(num,harga);
    cout<<"Total price of secound class is RM "<<num<<"x"<<harga<<"="<<jumlah2<<endl;
    
    cout<<"Please key-in number of ticket for third class:";
    num = inputNumber();
    
    cout<<"Please key-in price of ticket for third class: RM ";
    harga = inputHarga(); 
    
    int jumlah3;
    jumlah3 = calculate_ticketclass(num,harga);
    cout<<"Total price of third class is RM "<<num<<"x"<<harga<<"="<<jumlah3<<endl;
    
    tambah = total_price(jumlah1,jumlah2,jumlah3);
    cout<<"Total price of tickets is"<<"("<<"RM"<<jumlah1<<"+"<<"RM"<<jumlah2<<"+"<<"RM"<<jumlah3<<"):"<<tambah<<endl;
    
    cout<<"Please key-in percentage of discount:";
    dis = diskaunticket();
    
    total = total_Ticket(tambah , dis);
    
    amountCus(total);
   
}