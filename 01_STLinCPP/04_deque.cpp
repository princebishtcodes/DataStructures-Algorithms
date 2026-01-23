#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Deque stands for Double-Ended Queue. It's a sequence container that allows you to add or remove elements efficiently from both the front and the back.
    deque<int> dq;
    // INSERTION
    // 1. dq.push_back(5) : Pushes 5 at the end
    dq.push_back(5);

    // 2. dq.push_front(2) : Pushes 2 at front
    dq.push_front(2);

    // 3. dq.emplace_front(3) : Pushes 3 at front directly
    dq.emplace_front(3);

    // DELETION

    // dq.pop_back() : Removes Element from the last
    dq.pop_back();

    for (auto it : dq)
    {
        cout << it << " ";
    }

    cout << dq[0];
    // Here, we can access elements by their indices
    // Every other functions of vectors work here completely fine...
    return 0;
}