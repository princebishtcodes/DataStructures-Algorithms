#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
// vector<int> intersectionArray(vector<int> v1, vector<int> v2)
// {
//     int n1 = v1.size();
//     int n2 = v2.size();
//     vector<int> visited(n2, 0);
//     vector<int> result;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             if (v1[i] == v2[j] && visited[j] == 0)
//             {
//                 result.push_back(v1[i]);
//                 visited[j] = 1;
//                 break;
//             }
//             if (v1[i] < v2[j])
//             {
//                 break;
//             }
//         }
//     }
//     return result;
// }

// Optimal Approach
vector<int> intersectionArray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> result;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            result.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return result;
}

int main()
{
    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> v2 = {2, 3, 4, 8, 9};
    vector<int> result = intersectionArray(v1, v2);

    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}