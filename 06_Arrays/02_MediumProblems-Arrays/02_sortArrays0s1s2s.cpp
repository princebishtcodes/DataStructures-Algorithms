#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach: Sorting

// Better Approach: Using counters
// vector<int> sortColors(vector<int> &arr)
// {
//     int n = arr.size();
//     int counter0 = 0;
//     int counter1 = 0;
//     int counter2 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             counter0++;
//         else if (arr[i] == 1)
//             counter1++;
//         else if (arr[i] == 2)
//             counter2++;
//     }
//     for (int i = 0; i < counter0; i++)
//     {
//         arr[i] = 0;
//     }
//     for (int i = counter1; i < counter0 + counter1; i++)
//     {
//         arr[i] = 1;
//     }
//     for (int i = counter0 + counter1; i < n; i++)
//     {
//         arr[i] = 2;
//     }
//     return arr;
// }

// Optimal Approach : Using DNF (Dutch National Flag Algorithm)

int main()
{
    vector<int> arr = {2, 2, 2, 0, 0, 1, 1, 1, 1, 0, 0, 0, 2, 2, 2};
    vector<int> result = sortColors(arr);
    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}