// how you can use if..else to "open a door" if the user enters the correct code

#include <iostream>
using namespace std;

int main()
{
    int doorCode;
    cout << "Enter door Code : ";
    cin >> doorCode;

    if(doorCode == 1120)
    {
        cout << "Correct code.\nDoor is opening";
    }
    else
    {
        cout << "Incorrect Code.\nDoor remains closed";
    }

    return 0;
}