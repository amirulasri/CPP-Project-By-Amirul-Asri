#include<iostream>
using namespace std;
int kira(int a, int b);
int main(){
int num1 = 3;
cout<<" Hasil kiraan adalah  "<<kira(num1,10)<<endl;
}
int kira(int n1, int n2) {
int hasil;
hasil = n1 + n2*2;
return hasil;
}
