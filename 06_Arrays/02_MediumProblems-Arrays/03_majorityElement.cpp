#include <bits/stdc++.h>
using namespace std;

// Brute Force : Using sorting and Returning the mid element
// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     sort(nums.begin(), nums.end());
//     return nums[n / 2];
// }

// Better Approach : Using hashmap
// int majorityElement(vector<int> &nums)
// {
//     int n = nums.size();
//     unordered_map<int, int> um;
//     for (int i = 0; i < n; i++)
//     {
//         um[nums[i]]++;
//         if (um[nums[i]] > n / 2)
//             return nums[i];
//     }
//     return 0;
// }

// Optimal Approach : Using Boyer Moore's Voting Algorithm
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int counter = 0;
    int element;
    for (int i = 0; i < n; i++)
    {
        if (counter == 0)
        {
            counter = 1;
            element = nums[i];
        }
        else if (nums[i] == element)
        {
            counter++;
        }
        else
        {
            counter--;
        }
    }
    int counter1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (element == nums[i])
            counter1++;
    }
    if (counter1 > n / 2)
        return element;
    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums) << endl;
    return 0;
}