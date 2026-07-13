/* Function-Based Calculator (Cognizant)
Problem Statement:
Develop a C++ program that performs basic arithmetic operations using user
defined functions.
Create separate functions for:
∙ Addition
∙ Subtraction
∙ Multiplication
∙ Division
The program should:
∙ Accept two numbers from the user.
∙ Display a menu to choose the required operation.
∙ Call the appropriate function based on the user's choice. ∙

Display the calculated result.
∙ Handle division by zero using a suitable condition.
Concepts: Functions, Switch Case */

#include <iostream>
using namespace std;

    int add(int a, int b)
    {
        return a + b;
    }

    int subtract(int a, int b)
    {
        return a - b;
    }

    int mul(int a, int b)
    {
        return a * b;
    }

    int divide(int a, int b)
    {
        return a / b;
    }

    int main()
    {
        int num1, num2;
        int choice;

        cout << "Enter two numbers : ";
        cin >> num1 >> num2;

        cout << "\n-----Calculator Menu-----" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
    

    switch (choice)
    {
    case 1:
        cout << "Result = " << add(num1, num2) << endl;
        break;

    case 2:
        cout << "Result = " << subtract(num1, num2) << endl;
        break;

    case 3:
        cout << "Result = " << mul(num1, num2) << endl;
        break;

    case 4:
        if (num2 != 0)
        {
            cout << "Result = " << divide(num1, num2) << endl;
        }
        else
        {
            cout << "Division by zero is not possible" << endl;
        }
        break;

    default:
        cout << "Invalid Choice!" << endl;
    }

    return 0;
}