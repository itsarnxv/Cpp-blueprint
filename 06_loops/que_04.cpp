// create a program that prints the multiplication table for a specified number

#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    int i;

    for(int i = 0 ; i <= 10 ; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}