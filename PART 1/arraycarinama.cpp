#include <iostream>
using namespace std;

int main () {
    string carinama;
    string name[5] = {"azmi", "ahmad", "ahlong", "Ahweng", "aminah"};
    cout<<"Enter a name you want to search: ";
    cin >> carinama;

    int i = 0;
    bool sama = false;

    do{
        if (carinama == name[i]){
            sama = true;
        }
        i++;
    } while (sama == false);

    if (sama == true){
        cout<<"Jumpa yang sama";
    }else{
        cout<<"Tak jumpa yang sama";
    }
}