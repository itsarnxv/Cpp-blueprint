#include <iostream>
using namespace std;

int main() {
    int x = 4;

    // Logical AND (&&)
    cout << "(x < 5 && x < 10) : " << (x < 5 && x < 10) << endl;

    // Logical OR (||)
    cout << "(x < 5 || x < 4) : " << (x < 5 || x < 4) << endl;

    // Logical NOT (!)
    cout << "!(x < 5 && x < 10) : " << !(x < 5 && x < 10) << endl;

    return 0;
}