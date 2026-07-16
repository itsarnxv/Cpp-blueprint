/* Write a C++ program to input 10 integers into an array and find:

Sum
Average
Largest element
Smallest element */

#include <iostream>
using namespace std;

int main()
{
    int num[5] = {10 , 20 , 30 , 40 ,50};
    int sum = 0 , largest , smallest;
    float avg;

    largest = num[0];
    smallest = num[0];

    for(int i = 0 ; i < 5 ; i++)
    {
        sum += num[i];

        if(largest < num[i])
        {
            largest = num[i];
        }
        if(smallest > num[i])
        {
            smallest = num[i];
        }
    }

    cout << "Sum = " << sum << endl;

    avg = sum / 5;

    cout << "Average = " << avg << endl;

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;

    return 0;
}