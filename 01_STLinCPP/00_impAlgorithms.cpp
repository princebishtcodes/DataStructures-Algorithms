#include <bits/stdc++.h>
#include <functional>
using namespace std;

int main()
{
    // 1. Sort : Sorting can easily be done on vectors and arrays using sort algorithm
    // Sorting in Ascending Order
    vector<int> v = {21, 12, 43, 13, 87, 1, 4};
    sort(v.begin(), v.end());

    // Sorting in Descending Order
    sort(v.begin(), v.end(), greater<int>());
    // greater<int> is a comparator, also have to define object
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}