// Write a C++ program to check whether a given year is a leap year.

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter year : ";
    cin >> year;

    if(year % 4 == 0 || year % 100 == 0 || year % 400 == 0)
    {
        cout << "It is a leap Year";
    }
    else
    {
        cout << "Not a leap Year";
    }

    return 0;
}