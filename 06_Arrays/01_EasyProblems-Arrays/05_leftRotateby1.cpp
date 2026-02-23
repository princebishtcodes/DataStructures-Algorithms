#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &arr)
{
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (auto it : arr)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    leftRotate(arr);
    return 0;
}