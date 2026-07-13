// Synatx

/*
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if condition1 is false and condition2 is true
} else {
  // block of code to be executed if both conditions are false
}
  */

#include <iostream>
using namespace std;

int main()
{
    int time = 16;
    if (time < 12)
    {
        cout << "Good morning.";
    }
    else if (time < 18)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }
    return 0;
}
