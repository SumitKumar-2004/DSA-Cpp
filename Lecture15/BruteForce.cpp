
// Product of Array except itself using bruteforce approach without using division operator(/)

// Time Complexity: O(n^2) due to the nested loop.
// Space Complexity: O(n) for the result vector.



#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums)
{
   int n = nums.size();
   vector<int> ans(n, 1);
   for (int i = 0; i < n; i++)
   {
      for (int j = 0; j < n; j++)
      {
         if (i != j)
         {
            ans[i] *= nums[j];
         }
      }
   }
   return ans;
}
int main()
{
   vector<int> nums = {1, 2, 3, 4,5};
   vector<int> result = productExceptSelf(nums);
   cout << "Product of array except itself : ";
   for (int i = 0; i < nums.size(); i++)
   {
      cout << result[i] << " ";
   }
   cout << endl;

   return 0;
}