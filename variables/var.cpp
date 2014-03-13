// operating with variables
#include <iostream>
using namespace std;

int main()
{
  //declare vars
  signed short a, b;
  signed int result;

  //process:
  a = 5;
  b = 2;
  a = a+1;
  result = a-b;
  
  //print out the result
  cout << result;
  cout << "\n"; //print a new line

  //terminate the program
  return 0;
}
