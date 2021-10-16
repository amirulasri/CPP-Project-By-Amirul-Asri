#include <iostream>
using namespace std;

// FUNCTION TO GET CHARACTER AND TIMES TO DISPLAY
void display (char userCharParam, int userTimes){
    for (int i=0; i<userTimes; i++){
        cout << userCharParam;
    }
}

int main (){
    char userCharacter;
    int times;
    cout << "Hi!. Enter any character you want: ";
    cin >> userCharacter;
    cout << "How many times you want to display this "<<userCharacter<<" character? : ";
    cin >> times;
    display(userCharacter, times);
}