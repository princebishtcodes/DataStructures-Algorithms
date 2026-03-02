#include <bits/stdc++.h>
using namespace std;

vector<int> bestSubarray(vector<int> nums)
{
    int sum = 0;
    int maxSum = INT_MIN;
    int bestStart = 0, bestEnd = 0;
    int start = 0;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > maxSum)
        {
            maxSum = sum;
            bestStart = start;
            bestEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
            start = i + 1;
        }
    }
    for (int i = bestStart; i <= bestEnd; i++)
    {
        result.push_back(nums[i]);
    }
    return result;
}

int main()
{
    vector<int> arr = {4, -1, 2, 1, -5, 4};
    vector<int> best = bestSubarray(arr);
    for (auto it : best)
    {
        cout << it << " ";
    }
    return 0;
}