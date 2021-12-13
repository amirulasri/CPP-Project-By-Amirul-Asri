#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string package;
    cout<<"1 = Annually payment";
    cout<<"2 = Monthly payment";
    
    int paymentmethod;
    cout<<"Please enter the payment method : ";
    cin>>paymentmethod;

    switch (paymentmethod)
    {
        case 1:
          cout<<"Enter your package : ";
          cin>>package;

          int numSubject;
          double Fee;
          double Totfee;

          if (package == "Gold")
          {
             numSubject = 2;
             Fee = 50;
             Totfee = (Fee * 12) * 0.10 - Fee;
          }   
          if (package == "Diamond")
          {
             numSubject = 3;
             Fee = 80;
             Totfee = (Fee * 12) * 0.10 - Fee;
          }
          if (package == "Platinum")
          {
             numSubject = 4;
             Fee = 100;
             Totfee = (Fee * 12) * 0.10 - Fee;
          }
          cout<<"Fee for a year = "<<Totfee<<endl;
          break;
        case 2:
          cout<<"Enter your package : ";
          cin>>package;

          if (package == "Gold")
          {
             numSubject = 2;
             Fee = 50;
             Totfee = Fee * 12;
          }   
          if (package == "Diamond")
          {
             numSubject = 3;
             Fee = 80;
             Totfee = Fee * 12;
          }
          if (package == "Platinum")
          {
             numSubject = 4;
             Fee = 100;
             Totfee = Fee * 12;
          }
          cout<<"Fee for a year = "<<Totfee<<endl;
          break;
    }
    
}