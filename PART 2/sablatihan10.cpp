#include <iostream>
using namespace std;

int masukNombor1()
{
    int masukNo1;
    cout<<"Please key-in number of ticket for first class:";
    cin>>masukNo1;
    return masukNo1;
}

int calculate_Total(int a , double first)
{
    first = a * 18;
    cout<<"Total price of first class is RM18 X 3 = "<<first<<endl;
    return first;
}

int masukNombor2()
{
    int masukNo2;
    cout<<"Please key-in number of ticket for first class:";
    cin>>masukNo2;
    return masukNo2;
}

int calculate_Total2(int c , double secound)
{
    secound = c * 15;
    cout<<"Total price of first class is RM15 X 3 = "<<secound<<endl;
    return secound;
}

int masukNombor3()
{
    int masukNo3;
    cout<<"Please key-in number of ticket for first class:";
    cin>>masukNo3;
    return masukNo3;
}

int calculate_Total3(int e , double third)
{
    third = e * 10;
    cout<<"Total price of first class is RM10 X 1 = "<<third<<endl;
    return third;
}

int calculate_Total4(double b ,double d ,double f ,double totalTicket)
{
    totalTicket = b + d + f;
    cout<<"Total price of tickets is (RM 59.00 + RM 30.00 + RM 10.00):"<<totalTicket<<endl;
    return totalTicket;
}

int masukDiscount()
{
    double masukDis;
    cout<<"Please key-in percentage of discount:";
    cin>>masukDis;
    return masukDis;
}

double calculate_Total5( double discount, double h,int g,double Total,double GrandTotal)
{
    discount = (h/100);
    Total = g * discount;
    GrandTotal= g - Total;
    cout<<"Total tickets = "<<g<<"-"<<"Discount (3%)"<<" = "<<Total<<",Grand Total = "<<GrandTotal<<endl;
    return GrandTotal; 
}

int masukNilai()
{
    int masukN;
    cout<<"Please key-in amount paid by customer:";
    cin>>masukN;
    return masukN;
}

double calculate_Balance(int j, double balance, double i)
{
    balance = j - i;
    cout<<"Balance to be returned to cusyomer:"<<balance;
    return balance;
}




int main ()
{
    int a,b,c,d,e,f,g,j;
    double first,secound,third,four,totalTicket,discount,h,i,Total,GrandTotal,balance,k;
    cout.setf(ios::fixed);
    cout.precision(2);
    a = masukNombor1();
    b = calculate_Total(a , first);
    c = masukNombor2();
    d = calculate_Total2(c,secound);
    e = masukNombor3();
    f = calculate_Total3(e,third);
    g = calculate_Total4(b,d,f,totalTicket);
    h = masukDiscount();
    i = calculate_Total5(discount,h,g,Total,GrandTotal);
    j = masukNilai();
    k = calculate_Balance(j,balance,i);
}