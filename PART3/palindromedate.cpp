// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

bool isLeap(int year)
{
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        return true;
    }
}

bool ispalindromedate(int d, int m, int y)
{
    if (y > 9999 || y < 1800){
        return false;
    }
    if (m < 1 || m > 12){
        return false;
    }
    if (d < 1 || d > 31){
        return false;
    }
        
    if (m == 2)
    {
        if (isLeap(y)){
            if (d <= 29) {
                return true;
            }
        }
        else
        {
            if (d <= 28) {
                return true;
            }
        }
    }

    if (m == 4 || m == 6 || m == 9 || m == 11){
        if(d <= 30){
            return true;
        }
    }

    return true;
}

void printpalindromedate(string y1, string y2)
{
    
    //GET ONLY YEAR FROM INPUT
    int y1new = stoi(y1.substr(4, 7));
    int y2new = stoi(y2.substr(4, 7));
    
    for (int year = y1new; year <= y2new; year++)
    {

        string yearstring = to_string(year);

        string rev = yearstring;
        reverse(rev.begin(), rev.end());

        int day = stoi(rev.substr(0, 2));
        int month = stoi(rev.substr(2, 2));

        if (ispalindromedate(day, month, year))
        {
            cout << rev << yearstring << endl;
        }
    }
}

int main()
{
    string year1, year2;
    cout << "Put start date (DDMMYYY): ";
    cin >> year1;
    cout << "Put end date (DDMMYYY): ";
    cin >> year2;

    cout << "List all palindtome dates:" << endl;
    printpalindromedate(year1, year2);

    return 0;
}