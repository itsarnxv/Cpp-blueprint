#include <iostream>
using namespace std;

int main() {
    int x;

    // Assignment (=)
    x = 5;
    cout << "x = " << x << endl;

    // Addition Assignment (+=)
    x = 5;
    x += 3;      // x = x + 3
    cout << "x += 3 : " << x << endl;

    // Subtraction Assignment (-=)
    x = 5;
    x -= 3;      // x = x - 3
    cout << "x -= 3 : " << x << endl;

    // Multiplication Assignment (*=)
    x = 5;
    x *= 3;      // x = x * 3
    cout << "x *= 3 : " << x << endl;

    // Division Assignment (/=)
    x = 6;
    x /= 3;      // x = x / 3
    cout << "x /= 3 : " << x << endl;

    // Modulus Assignment (%=)
    x = 7;
    x %= 3;      // x = x % 3
    cout << "x %= 3 : " << x << endl;

    // Bitwise AND Assignment (&=)
    x = 6;       // Binary: 0110
    x &= 3;      // Binary: 0011
    cout << "x &= 3 : " << x << endl;

    // Bitwise OR Assignment (|=)
    x = 6;       // Binary: 0110
    x |= 3;      // Binary: 0011
    cout << "x |= 3 : " << x << endl;

    // Bitwise XOR Assignment (^=)
    x = 6;       // Binary: 0110
    x ^= 3;      // Binary: 0011
    cout << "x ^= 3 : " << x << endl;

    // Right Shift Assignment (>>=)
    x = 16;      // Binary: 10000
    x >>= 2;     // Shift right by 2 bits
    cout << "x >>= 2 : " << x << endl;

    // Left Shift Assignment (<<=)
    x = 4;       // Binary: 00100
    x <<= 2;     // Shift left by 2 bits
    cout << "x <<= 2 : " << x << endl;

    return 0;
}