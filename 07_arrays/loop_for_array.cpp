#include <iostream>
using namespace std;

int main()
{
    int num[5] = {10 , 20 , 30 , 40 , 50};
    for(int i = 0 ; i < 5 ; i++)
    {
        cout << num[i] << "\n";
    }
    return 0;
}

// --------------------------------------------------------------------------------

// Syntax

/* for(type variableName : arrayName)
{
    code block to be executed
} 
*/

#include <iostream>
using namespace std;

int main()
{
    int myNum[5] = {10 , 20 , 30 , 40 , 50};
    for(int num : myNum)
    {
        cout << num << "\n";
    }

    return 0;
}