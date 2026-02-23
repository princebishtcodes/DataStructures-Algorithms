#include <bits/stdc++.h>
using namespace std;

void myReverse(vector<int> &arr, int l, int r)
{
    while (l < r)
    {
        swap(arr[l++], arr[r--]);
    }
}

// Brute Force Approach
// Take the first k elements and store in Temp Array
// Put the elements at i index to i-k index
// Put back the temp elements inside the array
// void leftRotate(vector<int> &arr, int k)
// {
//     vector<int> temp;
//     int n = arr.size();
//     k = k % n;
//     for (int i = 0; i < k; i++)
//     {
//         temp.push_back(arr[i]);
//     }
//     for (int i = k; i < n; i++)
//     {
//         arr[i - k] = arr[i];
//     }
//     int j = 0;
//     for (int i = n - k; i < n; i++)
//     {
//         arr[i] = temp[j];
//         j++;
//     }
// }

// Optimal Approach
// Divide into two halfs, 1st Half : 0 to k, 2nd Half : n-k to n
// Reverse both the halfs, then reverse whole array
void leftRotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    // reverse(arr, arr+k);
    myReverse(arr, 0, k - 1);
    // reverse(arr+k, arr+n);
    myReverse(arr, k, n - 1);
    // reverse(arr, arr+n);
    myReverse(arr, 0, n - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    leftRotate(arr, 3);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}