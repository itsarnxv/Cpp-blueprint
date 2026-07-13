// Write a C++ program to find the largest of three numbers using nested if.

#include <iostream>
using namespace std;

int main()
{
    int a , b , c ;

    cout << "Enter 3 numbers : ";
    cin >> a >> b >> c;

    if(a > b)
    {
        if(a > c)
        {
            cout << "a is largest";
        }
        else
        {
            cout <<"c is largest";
        }
    }
    else
    {
        if(b > c)
        {
            cout << "b is largest";
        }
        else
        {
            cout << "c i largest";
        }
    }

    return 0;
}