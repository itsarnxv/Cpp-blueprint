/* 
(&&) (AND) - all conditions must be true
(||) (OR) - at least one condition must be true
(!) (NOT) - reverses a condition (true → false, false → true)
 */

#include <iostream>
using namespace std;

int main()
{
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 2; // 1 is highest

    if(isLoggedIn && (isAdmin || securityLevel <= 2))
    {
        cout << "Access granted.";
    }
    else
    {
        cout << "Access Denied.";
    }

    return 0;
}

// Try changing securityLevel and isAdmin to test different outcomes:
// securityLevel 1 = Access granted
// securityLevel 2 = Access granted
// securityLevel 3 = Access denied
// securityLevel 4 = Access denied
// If isAdmin = true, access is granted.