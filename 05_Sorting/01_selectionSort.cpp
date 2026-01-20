#include <bits/stdc++.h>
using namespace std;

// Selection Sort is a comparison-based sorting algorithm. It sorts by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element.

int main()
{
    vector<int> arr = {98, 12, 32, 11, 43, 5, 23, 25};
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }

    for (int i : arr)
    {
        cout << i << " ";
    }
    return 0;
}