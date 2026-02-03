#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Maps are associative containers, which contains key-value pairs, in sorted form.
    // No duplicate key
    map<int, string> m; // <key, value>

    // INSERTION

    // 1. Normally
    m[0] = "Prince"; // m[key] = value
    // 2. m.insert({1, "Raj"}) : ({key, value})
    m.insert({1, "Raj"});
    m.insert({2, "Priyanshu"});

    // ACCESSING
    for (auto it : m)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // DELETION
    // m.erase(2) : Deletes using key
    m.erase(2);

    // Rest all are same as vectors and sets
    return 0;
}