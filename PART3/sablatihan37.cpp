#include <iostream>

using namespace std;

const int baris=3;
const int lajur=2;

int main()
{
    int saiz[baris][lajur]={{20,57},{40,30},{35,37}};
                            
    
    for(int i=0; i<lajur;i++)
    {
        for(int j=0; j<baris; j++)
        {   
            cout<<saiz[j][i]<<"\t";
        }
        cout<<endl;
    }
    
}