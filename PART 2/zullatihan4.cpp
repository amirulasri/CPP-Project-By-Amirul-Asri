#include <iostream>
using namespace std;

int main(){
    int gendercode, countmale = 0, countfemale = 0;
    cout << "Count male and female of 10 student\nGender code (1 for male, 2 for female)\n\n";
    for(int i = 0; i < 10; i++){
        cout << "Student " << i+1 << ": ";
        cin >> gendercode;

        if(gendercode == 1){
            countmale = countmale + 1;
        }else if(gendercode == 2){
            countfemale = countfemale + 1;
        }
    }
    cout << "\nResult:\nMale students: " << countmale << "\nFemale students: " << countfemale;
}