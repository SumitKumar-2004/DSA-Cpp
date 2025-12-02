// Binary Exponential X^n - Bits : O(logn)
#include <iostream>
using namespace std;
double myPow(double x, int n)
{
    long binForm = n;
    // Base cases
    // if power is zero
    if (n == 0)
        return 1.0;
    // if the value is zero
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;

    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    // for negative power
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }
    double ans = 1;
    // for positive power
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x; // x^2
        binForm /= 2;
    }
    return ans;
}
int main()
{
    double result = myPow(2.000000,10);
    cout<<"Ans : "<<result; 
}