#include<iostream>
using namespace std;

#define price 5.99

int main()
{
	float no_boxes;
	cout<<"Number of boxes of chocolates purchased: ";
	cin>>no_boxes;
	
	float total = no_boxes + price;
	cout<<"Total: RM"<<total<<endl;
	
	float payment;
	cout<<"\nPayment received: RM";
	cin>>payment;
	
	float balance = payment - total;
	cout<<"Here is your balance: RM"<<balance<<endl;
}