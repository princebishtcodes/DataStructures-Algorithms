#include <bits/stdc++.h>
using namespace std;
void maxElement(vector<int> &arr)
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

    cout << "The Largest Element in Array is : " << largest;
}
int main()
{
    vector<int> arr = {12, 45, 76, 98, 32, 17};
    maxElement(arr);
    return 0;
}