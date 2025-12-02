// Product of Array except itself using bruteforce approach without using division operator(/) with o(1) space complexity

// time : o(n)
// space : O(1)
#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptItself(vector<int> &nums)
{
   int n = nums.size();
   vector<int> ans(n, 1);

   // prefix => ans
   for (int i = 1; i < n; i++)
   {
      ans[i] = ans[i - 1] * nums[i - 1];
   }

   // suffix
   int suffix = 1;
   for (int i = n - 2; i >= 0; i--)
   {
      suffix *= nums[i + 1]; // ith suffix
      ans[i] *= suffix;
   }
   return ans;
}
int main()
{
   vector<int> nums = {1, 2, 3, 4};
   vector<int> result = productExceptItself(nums);
   cout << "Product of array except itself : ";
   for (int i = 0; i < nums.size(); i++)
   {
      cout << result[i] << " ";
   }
   cout << endl;

   return 0;
}