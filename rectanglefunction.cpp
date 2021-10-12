#include <iostream>
using namespace std;

int area (int length, int width){
    int area;
    area = length * width;
    return area;
}

int main(){
    int width, length, result;
    for (int i = 0; i < 3; i++){
        cout << "Rectangle "<<i+1<<endl;
        cout << "Enter width of rectangle: ";
        cin >> width;
        cout << "Enter length of rectangle: ";
        cin >> length;
        result = area(length, width);
        cout << "Area of rectangle: " << result << endl;
        cout << "-------------------------"<<endl;
    }
}