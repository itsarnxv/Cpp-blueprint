// Write a C++ program to input a number and check whether it is even or odd.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Number : ";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "Number is Even.";

    }
    else
    {
        cout << "Number is Odd";
    }

    return 0;
}