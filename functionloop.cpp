#include <iostream>
using namespace std;

void display(string name, int manyloop)
{
    for (int i = 0; i < manyloop; i++)
    {
        cout << name << endl;
    }
}

int main()
{
    string name;
    int loopno;
    cout<<"Hi. enter your name: ";
    cin>>name;
    cout<<"How many loops you want: ";
    cin>>loopno;
    display(name, loopno);
}