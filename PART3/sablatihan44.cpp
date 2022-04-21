#include <iostream>
using namespace std;

const int saiz = 20;

void inputArray(int a[])
{
    int saiz = 20;
    for(int i = 0 ; i<saiz ; i++)
    {
        cout<<"Masukkan nombor (0) untuk berhenti :";
        cin>>a[i];
     if(a[i] == 0)
      {
        saiz = i;
      }
    }   
}

void inputArray1(int c[],int &x)
{
    int i = 0;
    do
    {
        cout<<"Masukkan nombor (0) untuk berhenti :";
        cin>>c[i];
        i++;
    }
    while (c[i-1] != 0);
         x = i;
}


    

void displayArray(int status[],int arraySize)
{
    int p = 0; int n = 0;
    for(int i = 0; i< arraySize-1; i++)
        {
        if(status[i] < 0)
        {
            n = n + 1;
            cout<<status[i]<<" negatif "<<endl;
        }
        else
        {
            p = p + 1;
            cout<<status[i]<<" positive"<<endl;
        }
        }
        cout<<"Total Positive :"<<p<<endl;
        cout<<"Total Negative :"<<n<<endl;
}

int main()
{
    int num[saiz];
    int saizBaru;
    //inputArray(num);
    inputArray1(num,saizBaru);
    displayArray(num,saizBaru);
    
    char to_continue;
    cout<<"Do you want to continue (Y/N)? ";
    cin>> to_continue;
    while(to_continue == 'Y' || to_continue == 'y')
    {
        inputArray1(num,saizBaru);
        displayArray(num,saizBaru);
        
        cout<<"\nDo you want to continue (Y/N)? ";
        cin>>to_continue;
    }
}