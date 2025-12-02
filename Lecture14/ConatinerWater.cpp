// Container with most water using brute force approcah : 0(n^2)
#include <iostream>
#include <vector>
using namespace std;
int maxArea(vector<int> &height)
{
    int maxWater = 0; // ans
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int width = j - i;
            int ht = min(height[i], height[j]);
            int currWater = width * ht;

            maxWater = max(maxWater, currWater);
        }
    }
    return maxWater;
}

int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int result = maxArea(height);
    cout << "MaxArea : " << result;
}