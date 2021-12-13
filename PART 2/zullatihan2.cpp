#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const float PI = 3.142;

    cout<<"1 = Triangle";
    cout<<"\n2 = Rectangle";
    cout<<"\n3 = Oval";
    cout<<"\n4 = Square";
    cout<<"\n5 = Trapezium";

    int area;
    cout<<"\nEnter the shape: ";
    cin>>area;

   float b;
   float h;
   float a;
   

    float formula;
    switch(area)
    {
        case 1:
           cout<<"\nEnter base: ";
           cin>>b;
           cout<<"\nEnter height: ";
           cin>>h;
           formula = 0.5 * b * h;
           cout<<"The area of triangle ="<<formula;
           break;
        case 2:
           cout<<"\nEnter base: ";
           cin>>b;
           cout<<"\nEnter height: ";
           cin>>h;
           formula = b * h;
           cout<<"The area of Rectangle ="<<formula;
           break;
        case 3:
           cout<<"\nEnter base: ";
           cin>>b;
           cout<<"\nEnter width: ";
           cin>>a;
           formula = PI * a * b;
           cout<<"The area of Oval ="<<formula;
           break;
        case 4:
           cout<<"\nEnter width: ";
           cin>>a;
           formula = pow(a,2);
           cout<<"The area of Square ="<<formula;
           break; 
        case 5:
           cout<<"\nEnter base: ";
           cin>>b;
           cout<<"\nEnter height: ";
           cin>>h;
           cout<<"\nEnter width: ";
           cin>>a;
           formula = 0.5 * (a + b) * h;
           cout<<"The area of Trapezium ="<<formula;
           break; 
    }
}