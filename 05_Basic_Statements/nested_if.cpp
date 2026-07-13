// Syntax

/*

if (condition1) {
  // code to run if condition1 is true
  if (condition2) {
    // code to run if both condition1 and condition2 are true
  }
}

*/
#include <iostream>
using namespace std;

int main()
{
  int age = 20;
  bool isCitizen = true;

  if (age >= 18)
  {
    cout << "Old enough to vote" << endl;

    if (isCitizen)
    {
      cout << "And you are a citizen , so you can vote" << endl;
    }
    else
    {
      cout << "But you must be a citizen to vote" << endl;
    }
  }
  else
  {
    cout << "Not old enough to vote" << endl;
  }
  return 0;
}