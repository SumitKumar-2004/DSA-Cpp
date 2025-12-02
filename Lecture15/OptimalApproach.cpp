// Product of Array except itself using bruteforce approach without using division operator(/) with o(1) space complexity

//time : o(n)
//space : o(n)

#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptItself(vector<int> &nums)
{
   int n = nums.size();
   vector<int> ans(n, 1);
   vector<int> prefix(n, 1);
   vector<int> suffix(n, 1);
   // prefix
   for (int i = 1; i < n; i++)
   {
      prefix[i] = prefix[i - 1] * nums[i - 1];
   }
   // suffix
   for (int i = n - 2; i >= 0; i--)
   {
      suffix[i] = suffix[i + 1] * nums[i + 1];
   }
   // answer array
   for (int i = 0; i < n; i++)
   {
      ans[i] = prefix[i] * suffix[i];
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