#include <bits/stdc++.h>
using namespace std;

// Brute Force, using Sets

// int removeDuplicates(vector<int> &arr)
// {
//     int n = arr.size();
//     set<int> s;
//     for (int i = 0; i < n; i++)
//     {
//         s.insert(arr[i]);
//     }
//     int index = 0;
//     for (auto it : s)
//     {
//         arr[index] = it;
//         index++;
//     }
//     return index;
// }

// Optimal Approach using Two Pointers

int removeDuplicates(vector<int> &arr)
{
    int n = arr.size();
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    cout << removeDuplicates(arr) << endl;
    return 0;
}