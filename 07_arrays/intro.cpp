/* Arrays are used to store multiple values in a single variable, 
instead of declaring separate variables for each value */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[4] = {"Volvo" , "BMW" , "Tesla" , "Mercedes"};
    cars[0] = "porsche";
    cout << cars[0];
    return 0;
}