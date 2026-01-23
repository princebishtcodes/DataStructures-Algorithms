#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Pairs is a utility data storage datatype which holds two values
    pair<int, int> p = {1, 2};
    // Here the elements inside pairs can accessed using p.first = 1, or p.second = 2
    cout << p.first << " " << p.second << endl;
    // A nested pair can also be made
    pair<int, pair<int, int>> p1 = {1, {2, 3}};
    cout << p1.first << " " << p1.second.second << " " << p1.second.first << endl;
    // An array of pair can also be initialised
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    cout << arr[1].second << endl;
    return 0;
}