#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Multiset is a Container like set, it just stores duplicate elements also, but in sorted order.
    multiset<int> ms;

    // INSERTION
    // ms.insert(1) : Inserts the Elements inside multiset
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(2); // {1, 1, 2}

    // DELETION
    // ms.erase(3) : Deletes the Element
    ms.erase(1); // Here it removes all the occurrences of 1 from multiset

    int count = ms.count(1); // Counts all the occurrences of 1s

    for (auto it : ms)
    {
        cout << it << " ";
    }
    return 0;
}