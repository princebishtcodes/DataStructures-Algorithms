#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Priority Queue is based on Heap DS, it stores values on the basis of priority.
    // By default, it uses Maximum Heap : Max elements at top
    priority_queue<int> pq;

    // INSERTION
    // 1. pq.push() : Pushes Elements on the basis of priority
    pq.push(45); // {45};
    pq.push(12); // {45, 12};
    pq.push(56); // {56, 45, 12};

    // 2. pq.emplace_back() : Pushes the Elements directly on the basis of priority
    pq.emplace(47); // {56, 47, 45, 12};

    // pq.top() : Accesses the topmost element
    cout << pq.top() << endl;

    // DELETION
    // 1. pq.pop() : Removes the top element
    pq.pop(); // {47, 45, 12};

    cout << pq.top() << endl;

    // (IMP) : To create a Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pqMin;

    return 0;
}