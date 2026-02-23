#include <bits/stdc++.h>
using namespace std;

// Brute Force: Implementing a linear search
// int missingElement(vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 1; i <= n; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             return i;
//         }
//     }
//     return 0;
// }

// Better: Using a hasharray
// int missingElement(vector<int> &arr)
// {
//     int n = arr.size();
//     int hashArray[n+1];
//     for (int i = 0; i < n; i++)
//     {
//         hashArray[arr[i]]++;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (hashArray[i] == 0)
//         {
//             return i;
//         }
//     }
//     return 0;
// }

// Optimal Approach : Summation
// int missingElement(vector<int> &arr)
// {
//     int n = (arr.size() + 1);
//     int sum = (n * (n + 1)) / 2;
//     int arrSum = 0;
//     for (auto it : arr)
//     {
//         arrSum += it;
//     }
//     int missingNum = sum - arrSum;
//     return missingNum;
// }

// Most Optimal Approach : XOR (^)
int missingElement(vector<int> &arr)
{
    int n = arr.size() - 1;
    int XOR1 = 0;
    int XOR2 = 0;
    for (int i = 0; i < n; i++)
    {
        XOR1 = XOR1 ^ (i + 1);
        XOR2 = XOR2 ^ arr[i];
    }
    XOR1 = XOR1 ^ arr.size();
    int missingNum = XOR1 ^ XOR2;
    return missingNum;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 6, 7, 8};
    cout << missingElement(arr) << endl;
    return 0;
}