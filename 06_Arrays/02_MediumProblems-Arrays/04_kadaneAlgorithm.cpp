#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
// int maxSubArray(vector<int> &nums)
// {
//     int n = nums.size();
//     int maxSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             sum += nums[j];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     return maxSum;
// }

// Optimal Approach : Using Kadane's Algorithm
int maxSubArray(vector<int> &arr)
{
    int sum = 0;
    int maxSum = INT_MIN;
    for (auto it : arr)
    {
        sum += it;
        if (maxSum < sum)
        {
            maxSum = sum;
        }
        if (sum < 0)
            sum = 0;
    }
    return maxSum;
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(arr) << endl;
    return 0;
}