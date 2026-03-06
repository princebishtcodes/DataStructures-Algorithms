#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach : Using three diff Vectors
// vector<int> rearrangeArray(vector<int> &nums)
// {
//     vector<int> result;
//     vector<int> pos;
//     vector<int> neg;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] > 0)
//         {
//             pos.push_back(nums[i]);
//         }
//         else if (nums[i] < 0)
//         {
//             neg.push_back(nums[i]);
//         }
//     }
//     for (int i = 0; i < nums.size() / 2; i++)
//     {
//         result.push_back(pos[i]);
//         result.push_back(neg[i]);
//     }
//     return result;
// }

// Optimal Approach : Using two Pointers
vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> ans(nums.size());
    int posIndex = 0, negIndex = 1;

    for (int x : nums)
    {
        if (x > 0)
        {
            ans[posIndex] = x;
            posIndex += 2;
        }
        else
        {
            ans[negIndex] = x;
            negIndex += 2;
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    vector<int> result = rearrangeArray(nums);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}