/* Write a C++ program to find the transpose of a 3 × 3 matrix. */

#include <iostream>
using namespace std;

int main()
{
    int arr[3][3];

    // Input matrix
    cout << "Enter 9 elements of the matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Display original matrix
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Display transpose
    cout << "\nTranspose Matrix:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}