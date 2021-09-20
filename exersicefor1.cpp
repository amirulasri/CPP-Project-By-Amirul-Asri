#include <iostream>
using namespace std;

int main()
{
    int nombor = 100;

    //DO WHILE
    do{
        if ((nombor % 2) != 0)
        {
            cout << nombor << endl;
        }

        nombor++;
    }while (nombor <= 200);

    //WHILE
    while (nombor <= 200){
        if ((nombor % 2) != 0)
        {
            cout << nombor << endl;
        }
        nombor++;
    }

    
}