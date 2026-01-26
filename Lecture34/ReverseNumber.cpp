// Revese a Number
#include <iostream>
using namespace std;
int main()
{
   int revNumber = 0;
   int n = 4537;
   while (n != 0)
   {
      int digit = n % 10;
      revNumber = revNumber * 10 + digit;
      n = n / 10;
   }

   cout << revNumber;
   return 0;
}