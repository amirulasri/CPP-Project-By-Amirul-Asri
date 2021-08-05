#include <iostream>
using namespace std;
int main()
{
    string nama = "Firdaus";
    int markah = 58;
    if (markah > 40)
    {
        cout<<"TAHNIAH "<<nama<<" anda LULUS. DAPAT"<<markah;
    }else{
        cout<<"Maaf "<<nama<<" anda gagal. Hanya dapat"<<markah;
    }
}