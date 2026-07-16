#include <iostream>
using namespace std;

int main()
{
    int myNum[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNum);                  // 4 x 5 (4 bytes x 5 elements) = 20 bytes.
    return 0;
}

// -------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int myNum[5] = {10 , 20 , 30 , 40 , 50};
    int len = sizeof(myNum) / 4;
    cout << len;

    return 0;
}