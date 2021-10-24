#include <iostream>
using namespace std;

int masukNombor( )
{
int mNombor ;
cin>>mNombor ;
return mNombor;
}

int addNumbers(int a, int b){
return a + b ;
}

int main ( ) {
int firstvalue , secoundvalue;
cout<<"Tolong masuk nombor pertama";
firstvalue = masukNombor();
cout<<"Tolong masuk nombor kedua";
secoundvalue = masukNombor();
cout<<" Atur cara sepatunya boleh menghasilkan output:\n";
cout<<"jumlah dua nombor itu ialah :"<<  addNumbers(firstvalue,secoundvalue)<<"\t";
cout<<"beza antara dua nombor itu ialah :"<< firstvalue - secoundvalue <<"\t";
cout<<"darab dua nombor itu ialah : "<< secoundvalue * firstvalue <<"\t";
}