// the while loop combined with an if else statement, let's say we play a game of Yatzy

#include <iostream>
using namespace std;

int main()
{
    int dice = 5;

    while( dice <= 6 )
    {
        if(dice < 6)
        {
            cout << "No Yatzy" << endl;
        }
        else
        {
            cout << "Yatzy!" << endl;
        }
        dice += 1;
    }

    return 0;
}