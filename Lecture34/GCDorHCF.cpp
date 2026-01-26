// GCD(Greatest Common Divisior) or HCF(Highest Common Factor)
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

//using recursion
int gcdReC(int a,int b){
   if( b == 0){
      return a;
   }

   return gcdReC(b, a % b);
}
int main()
{
   cout << gcd(20, 28) << endl;
   cout << gcd(6, 12) << endl;
   cout << gcd(0, 24) << endl;
   cout << gcdReC(20,28) << endl;
   return 0;
}