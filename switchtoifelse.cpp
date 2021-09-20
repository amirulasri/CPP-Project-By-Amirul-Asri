#include <iostream>
using namespace std;

int main(){
    int choice;
    cin>>choice;
    if(choice == 2 || choice == 4){
        cout<<"even numbers";
    }else if(choice == 1 || choice == 3){
        cout<<"odd numbers";
    }else{
        cout<<"Wrong choice";
    }

    cout<<"\nThank you";

    return 0;
}