#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Sets are associative containers which stores unique elements in sorted order
    set<int> s;

    // INSERTION
    // 1. s.insert() : Inserts element at the back
    s.insert(12); // {12};
    s.insert(9);  // {9, 12};
    s.insert(12); // Ignored {9, 12};
    s.insert(23); // {9, 12, 23};
    s.emplace(22); // {9, 12, 22, 23};

    // New Methods
    // 1. s.find() : Used with it, returns the address at which element is present or if not present,
    // Returns the st.end()
    auto it = s.find(12); // Returns the address of 12 in s
    auto it1 = s.find(2); // Returns the address of s.end()
    return 0;
}