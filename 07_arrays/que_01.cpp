/* Write a C++ program to declare an array of 5 integers, initialize it with values, 
and print all the elements. */

#include <iostream>
using namespace std;

int main()
{
    int Num[5] = {1 , 2 ,3 ,4 ,5};

    for(int i = 0 ; i < 5 ; i++)
    {
        cout << Num[i] << endl;
    }

    return 0;
}