// Predict the output of the following expressions before running the program, then verify your answers:

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5, c = 2;
    cout << a + b * c << endl;
    cout << (a + b) * c << endl;
    cout << ((a > b) && (b > c)) << endl;
    cout << ((a == 10) || (b == 0)) << endl;

    return 0;
}