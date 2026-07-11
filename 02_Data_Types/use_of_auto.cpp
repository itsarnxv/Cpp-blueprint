/* 
>> The auto keyword automatically detects the type of a variable based on the value you assign to it.
>> It helps you write cleaner code and avoid repeating types, especially for long or complex types. */

#include <iostream>
#include <string>
using namespace std;
 
int main () {
  auto myNum = 2;            // int
  auto myFloatNum = 2.99f;   // float
  auto myDoubleNum = 34.98;   // double
  auto myLetter = 'A';       // char
  auto myBoolean = true;     // bool
  auto myString = string("Arnav"); // std::string
     
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
 
  return 0;
}