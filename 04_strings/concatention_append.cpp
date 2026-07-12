// The (+) operator can be used between strings to add them together to make a new string.
// This is called concatenation.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstname = "Arnav";
    string lastname = " Raut";

    string fullName = firstname + lastname;
    cout << fullName;

    return 0;
}

// ---------------------------------------------------------------------------------------------

// Can also concatenate strings with the append() function.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstname = "Arnav";
    string lastname = " Raut";

    string fullName = firstname.append(lastname);
    cout << fullName;

    return 0;
}

// ---------------------------------If string is number-----------------------------------------------------

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string x = "10";
    string y = "20";
    string z = x + y;
    cout << z;
    return 0;
}