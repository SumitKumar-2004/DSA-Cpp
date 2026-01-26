// LCM of two numbers
#include <iostream>
using namespace std;
int gcd(int a, int b)
{
   while (a > 0 && b > 0)
   {
      if (a > b)
      {
         a = a % b;
      }
      else
      {
         b = b % a;
      }
   }
   if (a == 0)
   {
      return b;
   }
   return a;
}

// using recursion
int gcdReC(int a, int b)
{
   if (b == 0)
   {
      return a;
   }

   return gcdReC(b, a % b);
}
int LCM(int a, int b)
{
   int gcd = gcdReC(a, b);
   return (a * b) / gcd;
}
int main()
{
   cout << "LCM of 20 and 28 is : " << LCM(20, 28) << endl;
   return 0;
}