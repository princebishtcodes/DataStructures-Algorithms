#include <bits/stdc++.h>
using namespace std;

void MaxElement(vector<int> &arr)
{
    int n = arr.size();
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The max Element in this Array is : " << largest << endl;
}

int main()
{
    vector<int> arr = {12, 34, 54, 13, 45, 10, 6, 76, 26};
    MaxElement(arr);
    return 0;
}