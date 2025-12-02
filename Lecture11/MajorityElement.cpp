// Majority element
// 1)Brute Force Approach O(n^2)
// #include <iostream>
// #include <vector>
// using namespace std;

// int majorityElement(vector<int> nums)
// {
//     int n = nums.size();

//     for (int i = 0; i < n; i++)
//     {
//         int count = 0;

//         for (int j = 0; j < n; j++)
//         {
//             if (nums[j] == nums[i])
//             {
//                 count++;
//             }
//         }

//         if (count > n / 2)
//         {
//             return nums[i]; // Majority element found
//         }
//     }

//     return -1; // No majority element
// }

// int main()
// {
//     vector<int> nums = {2, 2, 1, 1, 1, 2, 2, 1, 1};
//     int result = majorityElement(nums);

//     if (result != -1)
//         cout << "Majority Element: " << result << endl;
//     else
//         cout << "No Majority Element Found." << endl;
// }

// 2)Optimize approach O(nlogn) , becaouse we use sorting here
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> nums)
{
    int n = nums.size();
    // sort
    sort(nums.begin(), nums.end());

    // freq count
    int freq = 1, ans = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2,1,1,1,};
    int result = majorityElement(nums);

    if (result != -1)
        cout << "Majority Element: " << result << endl;
    else
        cout << "No Majority Element Found." << endl;
}
