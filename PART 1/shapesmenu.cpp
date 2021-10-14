#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int selection, sentinal = 111;
    double base, length, radius, height, width, volume;
    const double pi = 3.142;
    cout << "Welcome. This program used for calculate volume of Shapes. select 1 of shapes below. To exit, enter 0 \n";
    while (sentinal != 0)
    {
        cout << "\n1. Cuboid \n2. Cone \n3. Pyramid \n0. Exit" << endl;
        cout << "Enter number: ";
        cin >> selection;
        switch (selection)
        {
        case 0:
            sentinal = 0;
            break;
        case 1:
            cout << "\nShape 1 selected (Cuboid)"<<endl;
            cout << "Enter width (CM): ";
            cin >> width;
            cout << "Enter length (CM): ";
            cin >> length;
            cout << "Enter height (CM): ";
            cin >> height;
            volume = width * length * height;
            cout << "Result: Cuboid volume is " << volume << endl;
            cout << "------" << endl;
            break;
        case 2:
            cout << "\nShape 2 selected (Cone)"<<endl;
            cout << "Enter radius (CM): ";
            cin >> radius;
            cout << "Enter height (CM): ";
            cin >> height;
            volume = (1 / 3) * pi * pow(radius, 2) * height;
            cout << "Result: Cone volume is " << volume << endl;
            cout << "------" << endl;
            break;
        case 3:
            cout << "\nShape 3 selected (Pyramid)"<<endl;
            cout << "Enter length (CM): ";
            cin >> length;
            cout << "Enter width (CM): ";
            cin >> width;
            cout << "Enter height: ";
            cin >> height;
            volume = 0.333333333 * length * width * height;
            cout << "Result: Pyramid volume is " << volume << endl;
            cout << "------" << endl;
            break;
        default:
            cout << "\nInvalid selection"<<endl;
            break;
        }
    }
}