/* Write a C++ program to count:

Even numbers
Odd numbers
Positive numbers
Negative numbers
Zeroes

in an array. */

#include <iostream>
using namespace std;

int main()
{
    int num[5];
    int zero = 0, even = 0, odd = 0, positive = 0, negative = 0;

    cout << "Enter 5 elemnts = ";

    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];

        if (num[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (num[i] > 0)
        {
            positive++;
        }
        else if (num[i] < 0)
        {
            negative++;
        }
        else
        {
            zero++;
        }
    }

    cout << "\nEven Numbers = " << even << endl;
    cout << "\nOdd Numbers = " << odd << endl;
    cout << "\nPositive Numbers = " << positive << endl;
    cout << "\nNegative Numbers = " << negative << endl;
    cout << "\nZeroes = " << zero << endl;

    return 0;
}