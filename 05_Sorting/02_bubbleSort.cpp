#include <bits/stdc++.h>
using namespace std;

// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order. The 1st pass(i = 0), pushes the largest to last and vice versa.

int main()
{
    vector<int> arr = {23, 12, 43, 11, 15, 5};
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        bool isSorted = false;
        for (int j = 1; j < n - i; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                isSorted = true;
            }
        }
        if (!isSorted)
            break;
    }

    for(int i : arr){
        cout<<i<<" ";
    }
}