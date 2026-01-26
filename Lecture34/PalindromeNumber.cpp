// Palindrome Number
#include <iostream>
#include <math.h>
using namespace std;
int reverse(int n)
{
   int revNumber = 0;

   while (n != 0)
   {
      int digit = n % 10;
      revNumber = revNumber * 10 + digit;
      n = n / 10;
   }
   return revNumber;
}
bool isPalindrome(int n)
{
   if (n < 0)
      return false;

   int revNumber = reverse(n);
   return n == revNumber;
}
int main()
{
   int n = 545;
   if (isPalindrome(n))
   {
      cout << n << " is a palindrome number." << endl;
   }
   else
   {
      cout << n << " is not a palindrome number." << endl;
   }

   return 0;
}