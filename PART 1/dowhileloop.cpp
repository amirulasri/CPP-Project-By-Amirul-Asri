#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int num=1, powerresult=0, total=0;
    do{
        powerresult = pow(num, 2);
        cout<<"Square of "<< num <<" is: "<< powerresult <<endl;
        total = total + powerresult;
        num++;
    }while(num<=10);

    cout<<"Total of all square number between 1 to 10 is: "<<total;
}