#include <iostream>

using namespace std;

int nomTempatan()
{
    int nom;
    cout<<"Masukkan Nombor Tempatan:";
    cin>>nom;
    return nom;
}

int nomAntarabangsa()
{
    int nom;
    cout<<"Masukkan Nombor Antarabangsa:";
    cin>>nom;
    return nom;
}

int mobilekemobile(int nomT)
{   
    int caj,cukai,total;
    if(nomT == 100)
    {
       caj = nomT * 0.50;
       cukai = nomT * 0.08;
       total = caj + cukai;
       cout<<"Mobile ke mobile"<<endl;
       cout<<"jumlah bil telefon tempatan: RM "<<total<<endl<<endl;
    }
    else if (nomT>100 && nomT<=200)
    {
       caj = nomT * 0.45;
       cukai = nomT * 0.07;
       total = caj + cukai;
       cout<<"Mobile ke mobile"<<endl;
       cout<<"jumlah bil telefon tempatan: RM "<<total<<endl<<endl;
    }
    else if(nomT>200 && nomT<=500)
    {
       caj = nomT * 0.40;
       cukai = nomT * 0.06;
       total = caj + cukai;
       cout<<"Mobile ke mobile"<<endl;
       cout<<"jumlah bil telefon tempatan: RM "<<total<<endl<<endl;
    }
    else if (nomT>500)
    {
        caj = nomT * 0.30;
       cukai = nomT * 0.05;
       total = caj + cukai;
        cout<<"Mobile ke mobile"<<endl;
       cout<<"jumlah bil telefon tempatan:RM "<<total<<endl<<endl;
    }
}


int mobileketalian(int nomT)
{   
    int caj,cukai,total;
    if(nomT == 100)
    {
       caj = nomT * 0.30;
       cukai = nomT * 0.03;
       total = caj + cukai;
       cout<<"Mobile ke talian tetap"<<endl;
       cout<<"jumlah bil telefon tempatan :RM"<<total<<endl<<endl;
    }
    else if (nomT>100 && nomT<=200)
    {
       caj = nomT * 0.25;
       cukai = nomT * 0.02;
       total = caj + cukai;
       cout<<"Mobile ke talian tetap"<<endl;
       cout<<"jumlah bil telefon tempatan:RM"<<total<<endl<<endl;
    }
    else if(nomT>200 && nomT<=500)
    {
       caj = nomT * 0.20;
       cukai = nomT * 0.01;
       total = caj + cukai;
       cout<<"Mobile ke talian tetap"<<endl;
       cout<<"jumlah bil telefon tempatan: RM"<<total<<endl<<endl;
    }
    else if (nomT>500)
    {
       caj = nomT * 0.10;
       cukai = nomT * 0.0;
       total = caj + cukai;
       cout<<"Mobile ke talian tetap"<<endl;
       cout<<"jumlah bil telefon tempatan: RM"<<total<<endl<<endl;
    }
}

int semuajenispanggilan(int nomA)
{   
    int caj,cukai,total;
    if(nomA == 100)
    {
       caj = nomA * 0.60;
       cukai = nomA* 0.10;
       total = caj + cukai;
       cout<<"Semua jenis panggilan"<<endl;
       cout<<"jumlah bil telefon Antarabangsa: RM"<<total<<endl<<endl;
    }
    else if (nomA>100 && nomA<=200)
    {
       caj = nomA * 0.55;
       cukai = nomA* 0.08;
       total = caj + cukai;
       cout<<"Semua jenis panggilan"<<endl;
       cout<<"jumlah bil telefon Antarabangsa:RM "<<total<<endl<<endl;
    }
    else if(nomA>200 && nomA<=500)
    {
       caj = nomA * 0.50;
       cukai = nomA * 0.06;
       total = caj + cukai;
       cout<<"Semua jenis panggilan"<<endl;
       cout<<"jumlah bil telefon Antarabangsa:RM"<<total<<endl<<endl;
    }
    else if (nomA>500)
    {
       caj = nomA * 0.40;
       cukai = nomA * 0.0;
       total = caj + cukai;
       cout<<"Semua jenis panggilan"<<endl;
       cout<<"jumlah bil telefon Antarabangsa:RM"<<total<<endl<<endl;
    }
}



int main()
{
    int nomT,nomA,mobile,talian,panggilanA;
    nomT = nomTempatan();
    nomA = nomAntarabangsa();
    mobile = mobilekemobile(nomT);
    talian = mobileketalian(nomT);
    panggilanA = semuajenispanggilan(nomA);
}