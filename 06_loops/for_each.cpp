/* There is also a "for-each loop" 
(also known as ranged-based for loop), which is used to loop through elements in an array  */

/* //Syntax
    for (type variableName : arrayName) {
      // code block to be executed
    }
*/

// ----------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int myNumber[5] = {10 , 20 , 30 , 40 , 50};
    for(int num : myNumber)
    {
        cout << num << "\n";
    }

    return 0;
}

// ----------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    string word = "Hello";
    for(char c : word)
    {
        cout << c << "\n";
    }

    return 0;
}