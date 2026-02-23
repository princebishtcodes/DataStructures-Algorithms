#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int key)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {12, 34, 54, 67, 89, 24, 85, 32};
    cout << linearSearch(arr, 89) << endl;
    return 0;
}