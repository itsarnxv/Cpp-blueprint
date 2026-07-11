// Create a program to calculate the area of a rectangle (by multiplying the length and width)

#include<iostream>
using namespace std;

int main()
{
    int area , length , breadth;
    cout << "Enter length and breadth of rectangle : " << endl;
    cin >> length >> breadth;

    area = length * breadth;

    cout << "Area of Rectangle is = " << area;

    return 0;
}
