#include <bits/stdc++.h>
using namespace std;

// Brute Force (Dividing into subArrays)
// int longestSubArray(vector<int> arr, int d)
// {
//     int longest = 0;
//     int n = arr.size();
//     for (int i = 0; i < n; i++)
//     {
//         int Sum = 0;
//         for (int j = i; j < n; j++)
//         {
//             Sum += arr[j];
//             if (Sum == d)
//             {
//                 longest = max(longest, j - i + 1);
//             }
//         }
//     }
//     return longest;
// }

// Better Approach(Best for Negatives) : Hashmap and prefixSum
int longestSubArray(vector<int> &arr, int k)
{
    int n = arr.size();
    unordered_map<int, int> prefixSum;
    int sum;
    int maxLength;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLength = i + 1;
        }
        int rem = sum - k;
        if (prefixSum.find(rem) != prefixSum.end())
        {
            int length = i - prefixSum[rem];
            maxLength = max(maxLength, length);
        }
        if (prefixSum.find(rem) == prefixSum.end())
        {
            prefixSum[sum] = i;
        }
    }
    return maxLength;
}

// Optimal Approach  (Using Two Pointers and Sliding Window)
// int longestSubArray(vector<int> &arr, int k)
// {
//     int n = arr.size();
//     int left = 0;
//     int right;
//     int sum = 0;
//     int maxLength = 0;
//     for (right = 0; right < n; right++)
//     {
//         sum += arr[right];
//         while (left <= right && sum > k)
//         {
//             sum -= arr[left];
//             left++;
//         }
//         if (sum == k)
//         {
//             maxLength = max(maxLength, right - left + 1);
//         }
//     }
//     return maxLength;
// }

int main()
{
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    cout << longestSubArray(arr, 15) << endl;
    return 0;
}