#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Number Hashing using Map
    // int arr[] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 5, 1, 2, 34, 5};
    // // Pre-computation
    // map<int, int> m;
    // for (int i = 0; i < 15; i++)
    // {
    //     m[arr[i]]++;
    // }
    // int n;
    // cin >> n;
    // cout << m[2] << endl;

    // Char Hashing using Map
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; i < s.size(); i++)
    {
        m[s[i] - 'a']++;
    }

    char c;
    cin >> c;
    cout << m[c - 'a'] << endl;
    // Here, for storing and fetching, map takes O(log n) in all 3 cases
    return 0;
}