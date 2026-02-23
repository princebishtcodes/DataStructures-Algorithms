#include <bits/stdc++.h>
using namespace std;

// Optimal Approach : Use two pointers, i and j
// Use i as iterator which scans all elements, use j only for non-zero elements
// When non zero element is found swap and move the pointer j

void moveZerostoEnd(vector<int> &nums)
{
    int n = nums.size();
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[j], nums[i]);
            j++;
        }
    }
}

int main()
{
    vector<int> nums = {1, 0, 3, 12, 0, 8, 0, 45, 0, 43, 0, 54};
    moveZerostoEnd(nums);
    for (auto it : nums)
    {
        cout << it << " ";
    }
    return 0;
}