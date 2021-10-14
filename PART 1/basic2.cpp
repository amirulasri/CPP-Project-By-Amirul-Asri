#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
    MessageBoxW(NULL, L"Window Registration Failed!", L"Error!", MB_SERVICE_NOTIFICATION | MB_OK);
}