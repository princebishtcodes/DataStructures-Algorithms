#include <bits/stdc++.h>
using namespace std;

// void secLargestBetter(vector<int> &arr)
// {
//     int n = arr.size();
//     int largest = arr[0];
//     int secLargest = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
//     }
//     for (auto it : arr)
//     {
//         if (it > secLargest && it != largest)
//         {
//             secLargest = it;
//         }
//     }
//     cout << "The Second Largest Element in array is : " << secLargest << endl;
// }

void secLargestOptimal(vector<int> &arr)
{
    int n = arr.size();
    int largest = arr[0];
    int secLargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                secLargest = largest;
                largest = arr[i];
            }

            else if (arr[i] < largest && arr[i] > secLargest)
            {
                secLargest = arr[i];
            }
        }
    }
    cout << "The Second Largest Element in Array is : " << secLargest << endl;
}

int main()
{
    vector<int> arr = {12, 34, 54, 13, 45, 10, 6, 76, 26};
    secLargestOptimal(arr);
    return 0;
}