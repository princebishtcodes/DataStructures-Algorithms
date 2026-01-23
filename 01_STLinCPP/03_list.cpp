#include <bits/stdc++.h>
using namespace std;

int main()
{
    // A list in C++ is a sequence container that allows you to store elements one after another. Works on the principle of doubly linked list, which makes it accessible at both front and back.
    list<int> ls;

    // INSERTION
    // 1. ls.push_back(45) : Pushes the element at the last index
    ls.push_back(45);

    // 2. ls.emplace_back(34) : Pushes the element at last index directly
    ls.emplace_back(34);

    // 3. ls.push_front(12) :  Pushes the element at first index
    ls.push_front(12);

    // 4. ls.emplace_front(89) : Pushes the element at first index directly
    ls.emplace_front(90);

    for (auto it : ls)
    {
        cout << it << " ";
    }
    // For Each works here normally
    // Other all the functions of vectors also works here
    // (imp) Unlike vectors, you can't access elements in list using ls[0]
    return 0;
}