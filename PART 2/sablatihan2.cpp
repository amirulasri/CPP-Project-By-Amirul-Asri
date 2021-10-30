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
int firstvalue , secoundvalue,thirdvalue;
cout<< "Tolong masuk nombor pertama: ";
firstvalue = masukNombor();
cout<< "Tolong masuk nombor kedua:";
secoundvalue = masukNombor();
cout<<"Tolong masuk nombor ketiga:";
thirdvalue= masukNombor();
cout<<"Atur cara sepatunya boleh menghasilkan output:\n";
cout<<(secoundvalue*100)+firstvalue<<endl;
cout<<firstvalue<<endl;
if(thirdvalue <= 50){
cout << 1 << thirdvalue << "\t";
}else{
cout << 0 << thirdvalue << "\t";
}
cout<<thirdvalue;
}