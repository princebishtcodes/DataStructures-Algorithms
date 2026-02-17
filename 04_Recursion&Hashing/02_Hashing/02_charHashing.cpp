#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // Pre-computation
    int hashArray[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hashArray[s[i]]++;
    }
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;

        // Fetching
        cout << hashArray[c] << endl;
    }
    return 0;
}