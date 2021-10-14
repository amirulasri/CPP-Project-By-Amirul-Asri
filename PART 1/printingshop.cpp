#include <iostream>
using namespace std;

int main () {
    int quantity;
    double result;

    cout<<"ANIS PRINTING SDN BHD \n\n";

    cout<<"Enter the number of quantity: ";
    cin>>quantity;

    //SET FOR 2 DECIMAL PLACE EVERY NUMBERS
    cout.setf(ios::fixed);
    cout.precision(2);

    if(quantity > 0 && quantity <= 10){
        result = quantity * 3;
    }else if(quantity >= 11 && quantity <= 20){
        result = quantity * 2.50;
    }else if(quantity > 20){
        result = quantity * 2;
    }else{
        cout<<"Invalid value\n";
        exit(1);
    }

    cout<<"Total price (RM): "<<result;
}