#include <bits/stdc++.h>
using namespace std;

void myReverse(vector<int> &arr, int l, int r)
{
    while (l < r)
    {
        swap(arr[l++], arr[r--]);
    }
}

// Optimal Approach
// Reverse from 0 to n-k-1 : First half
// Reverse from n-k to n-1 : Second half
// Reverse full array

void rightRotate(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    myReverse(arr, 0, n - k - 1);
    myReverse(arr, n - k, n - 1);
    myReverse(arr, 0, n - 1);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    rightRotate(arr, 3);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    return 0;
}