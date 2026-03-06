#include <bits/stdc++.h>
using namespace std;

int maximumProfit(vector<int> &nums)
{
    if (nums.empty())
        return 0;
    int minPrice = nums[0];
    int maxProfit = 0;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] < minPrice)
        {
            minPrice = nums[i];
        }
        else
        {
            int profit = nums[i] - minPrice;
            maxProfit = max(maxProfit, profit);
        }
    }
    return maxProfit;
}

int main()
{
    vector<int> nums = {7, 1, 5, 3, 6, 4};
    cout << maximumProfit(nums) << endl;
    return 0;
}