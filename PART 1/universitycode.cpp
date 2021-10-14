#include <iostream>
using namespace std; 

int main()
{
	char code;
	string uniName; 
	
	cout << "THIS IS A CODE OF UNIVERSITY PROGRAM: \n" ;
	cout << "Choose the code: \n1.S \n2.P \n3.K \n4.U \n" ;
	cout << "\nEnter your code: ";
	cin >> code ;

	switch (code)
	{
		case 'S':
		 uniName = "Universiti Sains Malaysia";
		 break;
		case 'P':
		 uniName = "Universiti Putra Malaysia";
		 break;
		case 'K':
	     uniName = "Universiti Kebangsaan Malaysia";
		 break;
		case 'U':
	     uniName = "Universiti Utara Malaysia";
		 break;
		default:
		cout << "invalid university" ;
        break;
	}
	
   cout << "Code of " << code << " is: "<<uniName;
}