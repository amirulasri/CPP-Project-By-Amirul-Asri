#include <iostream>
using namespace std;

void displayresult(char grades, int level){
    if((grades == 'A') && (level == 2)){
        cout << "\nBest candidate for the competition";
    }else if((grades == 'A') && (level == 1)){
        cout << "\nCan be considered";
    }else if((grades == 'B') && (level == 1)){
        cout << "\nCan be considered";
    }else if((grades == 'B') && (level == 2)){
        cout << "\nNot accepted";
    }else if(grades == 'C'){
        cout << "\nNot accepted";
    }else{
        cout << "\nInvalid input";
    }
}

char tentukangrade(int markah){
    char grades;
    if((markah >= 0) && (markah <= 40)){
        grades = 'C';
    }else if((markah >= 41) && (markah <= 70)){
        grades = 'B';
    }else if((markah >= 71) && (markah <= 100)){
        grades = 'A';
    }else{
        cout << "\nINVALID markah INPUT. PROGRAM ENDED";
        exit(EXIT_FAILURE);
    }
    return grades;
}

int main(){
    string no_matric = "";
    int markah = 0;
    int level = 0;
    char grades = '-';

    for(int i = 0; i < 10; i++){
        cout << "\nPelajar " << (i+1) << ": \n";
        cout << "Matric No: " ;
        cin >> no_matric;
        cout << "markah (0 - 100): ";
        cin >> markah;
        cout << "Level (1-2): ";
        cin >> level;

        cout << "\n\n--- PELAJAR " << (i+1) << "---";
        cout << "\nMatric No: " << no_matric;
        cout << "\nmarkah: " << markah;
        cout << "\nLevel: " << level;
        grades = tentukangrade(markah);
        cout << "\ngrades: " << grades;
        displayresult(grades, level);
        cout << endl << endl;
    }
}