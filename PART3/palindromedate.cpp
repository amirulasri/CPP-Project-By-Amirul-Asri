// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
 
const int MAX_VALID_YR = 9999;
const int MIN_VALID_YR = 1800;
 
// Returns true if
// given year is valid
bool isLeap(int year)
{
    // Return true if year
    // is a multiple of 4 and
    // not multiple of 100.
    // OR year is multiple of 400.
    return (((year % 4 == 0)
             && (year % 100 != 0))
            || (year % 400 == 0));
}
 
// Returns true if given
// year is valid or not.
bool isValidDate(int d, int m, int y)
{
    // If year, month and day
    // are not in given range
    if (y > MAX_VALID_YR || y < MIN_VALID_YR)
        return false;
    if (m < 1 || m > 12)
        return false;
    if (d < 1 || d > 31)
        return false;
 
    // Handle February month
    // with leap year
    if (m == 2) {
        if (isLeap(y))
            return (d <= 29);
        else
            return (d <= 28);
    }
 
    // Months of April, June,
    // Sept and Nov must have
    // number of days less than
    // or equal to 30.
    if (m == 4 || m == 6 || m == 9 || m == 11)
        return (d <= 30);
 
    return true;
}
 
// Function to print the palindrome
// dates between the given years
void printPalindromeDates(int y1, int y2)
{
 
    // For every year
    for (int year = y1; year <= y2; year++) {
 
        // Current year as a string
        string str = to_string(year);
 
        // To store the reverse of year
        string rev = str;
        reverse(rev.begin(), rev.end());
 
        // Get the day and the month
        int day = stoi(rev.substr(0, 2));
        int month = stoi(rev.substr(2, 2));
 
        // If the current palindrome date is valid
        if (isValidDate(day, month, year)) {
            cout << rev << str << endl;
        }
    }
}
 
// Driver code
int main()
{
    int y1 = 2001, y2 = 2005;
 
    printPalindromeDates(y1, y2);
 
    return 0;
}