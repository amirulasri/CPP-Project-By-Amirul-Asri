#include <iostream>

using namespace std;

const int baris=3;
const int lajur=2;

int main()
{                           //   0           1           2
    int saiz[baris][lajur]={  {20,57}  ,  {40,30}  ,  {35,37}  };               
                            // 00 01       10 11       20 21
    for(int i=0; i<lajur;i++)
    {
        for(int j=0; j<baris; j++)
        {   
            cout<<saiz[j][i]<<"\t";
        }
        cout<<endl;
    }
    
}