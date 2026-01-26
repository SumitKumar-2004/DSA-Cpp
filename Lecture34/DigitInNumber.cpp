// Digits in a Number
#include <iostream>
using namespace std;
void printDigits(int n)
{
   int count = 0;
   int sum = 0;
   while (n != 0)

   {
      int digit = n % 10;
      count++;
      sum += digit;

      cout << digit << endl;

      n = n / 10;
   }
   cout << "The count of digits is : " << count << endl;
   cout << "Sum of every digit is : " << sum << endl;
}
int main()
{
   int n = 3568;
   printDigits(n);
}