// To get the length of a string, use the length() function.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length() << endl;
    cout << txt[5];
    return 0;
}