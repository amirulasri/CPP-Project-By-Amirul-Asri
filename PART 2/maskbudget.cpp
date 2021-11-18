#include <iostream>
using namespace std;

int main(){
    double budget;
    int result;
    const double maskprice = 5.90;
    cout << "Enter your budget: RM";
    cin >> budget;
    result = budget/maskprice;
    cout << "\nWith your budget, you will get " << result << " boxes of face masks.";
}