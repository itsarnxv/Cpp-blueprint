/* Inside main(), complete the following steps:
Declare two int variables named itemPrice and shippingCost, and assign them values
Create an int variable named sum
Calculate the total cost by adding itemPrice and shippingCost (store the result in sum)
Print the total cost using cout */

#include<iostream>
using namespace std;

int main()
{
    int itemPrice = 100 , shippingCost = 200 , sum;
    sum = itemPrice + shippingCost;

    cout <<"Total cost is = " << sum;

    return 0;
}