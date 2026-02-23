#include <bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6};
    cout << checkSorted(arr) << endl;
    return 0;
}