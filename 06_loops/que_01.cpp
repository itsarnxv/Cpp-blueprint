// create a program that only print even numbers between 0 and 10 (inclusive)

#include <iostream>
using namespace std;

int main()
{
    int i = 0;

    while(i <= 10)
    {
        cout << i <<"\n";
        i += 2;
    }

    return 0;
}