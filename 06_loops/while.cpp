// Syntax

/*
 while (condition) {
  // code block to be executed
} 
*/

#include <iostream>
using namespace std;

int main()
{
  int countdown = 3;

  while(countdown > 0)
  {
    cout << countdown << "\n";
    countdown--;
  }

  cout << "Happy New Year!!\n";

    return 0;
}