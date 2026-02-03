#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Sets are associative containers which stores unique elements in sorted order
    set<int> s;

    // INSERTION

    // 1. s.insert() : Inserts element at the back
    s.insert(12);  // {12};
    s.insert(9);   // {9, 12};
    s.insert(12);  // Ignored {9, 12};
    s.insert(23);  // {9, 12, 23};
    s.emplace(22); // {9, 12, 22, 23};

    // DELETION

    // 1. s.erase(2) : Removes 2 from the set
    s.erase(9); // {12, 22, 23}
    // Or it can also delete using it
    auto it3 = s.find(23);
    s.erase(23); // {12, 22}
    // Also deletes multiple elements using it
    // {1, 2, 3, 4, 5, 6}
    // auto it1 = s.find(2);  auto it2 = s.find(5);
    // s.erase(it1, it2) // {1, 2, 5, 6}

    // New Methods

    // 1. s.find() : Used with it, returns the address at which element is present or if not present,
    // Returns the st.end()
    auto it = s.find(12); // Returns the address of 12 in s
    auto it1 = s.find(2); // Returns the address of s.end()

    // 2. s.count(2) : Only gives the occurrences of the element, like 0 or 1
    cout << s.count(9) << endl;

    // 3. s.lower_bound(2), s.upper_bound(3)

    // IMP: Sets doesn't have indices, s[0] X

    for (auto st : s)
    {
        cout << st << " ";
    }
    return 0;
}