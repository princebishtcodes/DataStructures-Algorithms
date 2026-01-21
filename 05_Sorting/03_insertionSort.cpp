#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {23, 12, 43, 11, 15, 5};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
}