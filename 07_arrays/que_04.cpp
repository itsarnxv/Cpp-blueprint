/* Write a C++ program to find:

Sum of each row
Sum of each column

of a 3 × 3 matrix. */

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int sum;

    // Input matrix
    cout << "Enter 9 elements of the matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Display matrix
    cout << "\nMatrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Sum of each row
    cout << "\nSum of each row:\n";
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row " << i + 1 << " = " << sum << endl;
    }

    // Sum of each column
    cout << "\nSum of each column:\n";
    for (int j = 0; j < 3; j++)
    {
        sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        cout << "Column " << j + 1 << " = " << sum << endl;
    }

    return 0;
}