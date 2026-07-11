/* Write a C++ program to store the following details of a student using appropriate data types:

Name
Age
Roll Number
Percentage
Grade
Passed (true/false)

Display all the details in a formatted output. */

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name[20];
    char grade;
    int age , roll;
    float per;
    bool passed;

    cout << "Enter Name : ";
    cin >> name[20];
    cout << "Enter Age : ";
    cin >> age;
    cout << "Enter Roll Number : ";
    cin >> roll;
    cout << "Enter Percentage : ";
    cin >> per;
    cout << "Enter Grade : ";
    cin >> grade;

    cout << "Student Details" << endl;
    cout << "Name: " << name[20] << endl;
    cout << "Age: " << age << endl;
    cout << "Roll Number: " << roll << endl;
    cout << "Percentage: " << per << "%" << endl;
    cout << "Grade: " << grade << endl;

    if(grade == 'A' || grade == 'B' || grade == 'C')
    {
        passed = true;
    }
    else
    {
        passed = false;
    }

    cout << "Result = " << passed << endl;

    return 0;
}