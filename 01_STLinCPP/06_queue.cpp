#include <bits/stdc++.h>
using namespace std;

int main()
{
    // A queue stores multiple elements in a specific order, called FIFO (First In First Out)
    queue<int> q;

    // INSERTION
    // 1. q.push() : Inserts the Element
    q.push(45); // {45}
    q.push(23); // {45, 23}
    q.push(65); // {45, 23, 65}

    // 2. q.emplace() : Inserts the Element directly
    q.emplace(98); // {45, 23, 65, 98}

    // DELETION
    // 1. q.pop() : Removes the Element from First (FIFO)
    q.pop(); // {23, 65, 98}

    // ACCESSING
    // 1. q.front()
    cout << q.front() << endl; // {23}

    // 2. q.back()
    cout << q.back() << endl; // {98}
    return 0;
}