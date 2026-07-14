// use a while loop to reverse some numbers

#include <iostream>
using namespace std;

int main()
{
    int num = 12112;
    int revNum = 0;

    while(num)
    {
        revNum = revNum * 10 + num % 10;
        num /= 10 ; 
    }

    cout << "Reversed numnber : " << revNum << "\n";

    return 0;
}