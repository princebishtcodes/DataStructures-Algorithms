#include <bits/stdc++.h>
using namespace std;

// Optimal Approach
int maxConsecutiveOnes(vector<int> &arr)
{
    int count = 0;
    int maxOnes = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxOnes = max(count, maxOnes);
        }
        else
        {
            count = 0;
        }
    }
    return maxOnes;
}

int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1, 1, 0, 1, 1};
    cout << maxConsecutiveOnes(arr) << endl;
    return 0;
}