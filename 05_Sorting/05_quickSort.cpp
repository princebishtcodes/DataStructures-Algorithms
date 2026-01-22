#include <bits/stdc++.h>
using namespace std;

int partIndex(vector<int> &arr, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = arr[low];

    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int partition = partIndex(arr, low, high);
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

int main()
{
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};

    quickSort(arr, 0, arr.size() - 1);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}