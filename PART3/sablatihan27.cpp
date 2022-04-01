#include <iostream>

using namespace std;

int * namamurid (int k[])
{
    string nama [3]= {"la","li","lu"};
    
    for(int i = 0 ; i<3 ;i++)
    {
        cout<<"jumlah yuran "<<nama[i]<<":";
        cin>>k[i];
    }
    return k;
}

int * cusbankin(int in[])
{
    string nama [3]= {"la","li","lu"};
   for(int i = 0 ; i<3 ;i++)
   {
    cout<<"jumlah wang di bank in "<<nama[i]<<":";
    cin>>in[i];
   }
   return in;
}

void baki(int in[] ,int b[],  int jumlah)
{
  
    string nama [3]= {"la","li","lu"};
   for(int i = 0 ; i<3 ;i++)
   {
    jumlah = (in[i] - b[i]);
    cout<<"jumlah baki "<<nama[i]<<":"<<jumlah<<endl;
   }
}


int main()
{
    int yuran[3],in[3],jumlah,x;
    int *arrayyuran = namamurid(yuran);
    int *arrayin = cusbankin(in);
    baki (in,yuran,jumlah);
}