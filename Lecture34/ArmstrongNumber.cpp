// Armstrong Number
#include <iostream>
using namespace std;
bool isArmstrong(int n)
{
   int copyN = n;
   int sumOfCubes = 0;
   while (n != 0)
   {
      int digit = n % 10;
      sumOfCubes += (digit * digit * digit);

      n = n / 10;
   }
   return sumOfCubes == copyN;
}
int main()
{
   int n = 153;
   if (isArmstrong(n))
   {
      cout << n << " is an armstrong number\n";
   }
   else
   {
      cout << n << " is not an armstrong number\n";
   }
   return 0;
}