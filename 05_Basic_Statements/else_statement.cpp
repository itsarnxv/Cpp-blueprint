// Syntax

/* 
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
*/

#include<iostream>
using namespace std;

int main()
{
    int age = 15;
    if(age > 18)
    {
        cout << "Eligible to Vote";
    }
    else{
        cout << "Not eligible to vote";
    }

    return 0;
}