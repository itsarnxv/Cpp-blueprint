/* Write a C++ program to input three numbers and:

Find the largest using relational and logical operators.
Check if all three numbers are equal.
Check whether at least one number is even. */

#include<iostream>
using namespace std;

int main()
{
    int a = 20 , b = 31 , c = 40;


    if(a > b && a > c)
    {
        cout << "a is largest" << endl;
    }
    else if(b > a && b > c)
    {
        cout  << "b is largest" << endl;
    }
    else
    {
        cout << "c is largest" << endl;
    }



    if(a == b && b == c)
    {
        cout << "All are equal" << endl;
    }
    else
    {
        cout << "All are not equal" << endl;
    }

    if(a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
    {
        cout << "At least one is even" << endl;
    }
    else 
    {
        cout << "All are odd" << endl;
    }


    return 0;
}