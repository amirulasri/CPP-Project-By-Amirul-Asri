#include <iostream>
using namespace std;

void nilaiTempatan(int &tnom, int &anom)
{
    cout<<"Bilangan minit untuk panggilan tempatan:";
    cin>>tnom;
    cout<<"Bilangan minit untuk panggilan Antarabangsa:";
     cin>>anom;
}



void jumlahTempatan(int &tnom)
{
    double m1,m2,m3;
    if(tnom<=100)
    {
        m1 = tnom* 0.10;
        cout<<"Jumlah panggilan tempatan :"<<m1<<endl;
    }
    else if(tnom>100 && tnom<200)
    {
        m2 = tnom* 0.09;
        cout<<"Jumlah panggilan tempatan :"<<m2<<endl;
    }
    else
    {
        m3= tnom* 0.08;
         cout<<"Jumlah panggilan tempatan :"<<m3<<endl;
    }
    
}

void jumlahAntarabangsa(int &anom)
{
    double m4,m5,m6;
    if(anom<=200)
    {
        m4 = anom* 0.30;
        cout<<"Jumlah panggilan antarabangsa:"<<m4<<endl;
    }
    else if(anom>100 && anom<200)
    {
        m5 = anom* 0.28;
        cout<<"Jumlah panggilan antarabangsa:"<<m5<<endl;
    }
    else
    {
        m6= anom* 0.25;
         cout<<"Jumlah panggilan antarabangsa:"<<m6<<endl;
    }
    
}

void jumlahKeseluruhan(double tnom, double anom)
{
    double jumlah = tnom + anom;
}

int main()
{
    int tnom,anom;
    nilaiTempatan(tnom,anom);
    jumlahTempatan(tnom);
    jumlahAntarabangsa(anom);
    jumlahKeseluruhan(tnom, anom);
}