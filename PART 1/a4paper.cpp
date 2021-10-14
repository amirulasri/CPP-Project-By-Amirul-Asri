#include <iostream>
using namespace std;

int main () {
    //DECLARING VARIABLE
    const double a4whiteprice = 0.05;
    const double a4greenprice = 0.10;
    const double a4pinkprice = 0.15;
    int quantitya4white, quantitya4green, quantitya4pink;
    double costa4white, costa4green, costa4pink;
    double totalcost;
    
    //INPUT BY USER
    cout<<"Quantity of White A4 paper : ";
    cin>>quantitya4white;
    
    cout<<"Quantity of Green A4 paper : ";
    cin>>quantitya4green;

    cout<<"Quantity of Pink A4 paper : ";
    cin>>quantitya4pink;

    //SET FOR 2 DECIMAL PLACE EVERY NUMBERS
    cout.setf(ios::fixed);
    cout.precision(2);

    //PROCESS
    costa4white = quantitya4white * a4whiteprice;
    costa4green = quantitya4green * a4greenprice;
    costa4pink = quantitya4pink * a4pinkprice;
    totalcost = costa4white + costa4green + costa4pink;

    //OUTPUT TO SCREEN
    cout<<"\n\nWhite A4 paper : RM "<<costa4white<<" ("<<quantitya4white<<" x "<<a4whiteprice<<")\n";
    cout<<"Green A4 paper : RM "<<costa4green<<" ("<<quantitya4green<<" x "<<a4greenprice<<")\n";
    cout<<"Pink A4 paper : RM "<<costa4pink<<" ("<<quantitya4pink<<" x "<<a4pinkprice<<")\n";
    cout<<"Total: RM "<<totalcost;

}