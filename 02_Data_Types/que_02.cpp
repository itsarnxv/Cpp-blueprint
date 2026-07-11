/* Write a C++ program that prints the size (in bytes) of the following data types:

char
int
float
double
bool
long
long long */

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " byte" << endl;
    cout << "Size of float: " << sizeof(float) << " byte" << endl;
    cout << "Size of double: " << sizeof(double) << " byte" << endl;
    cout << "Size of bool: " << sizeof(bool) << " byte" << endl;
    cout << "Size of long: " << sizeof(long) << " byte" << endl;
    cout << "Size of long long: " << sizeof(long long) << " byte" << endl;

    return 0;
}