// Synatx
// variable = (condition) ? expressionTrue : expressionFalse;

#include <iostream>
using namespace std;

int main()
{
    int time = 20;
    string result = (time < 18) ? "Good day!" : "Good Evening!";
    cout << result;
    return 0;
}