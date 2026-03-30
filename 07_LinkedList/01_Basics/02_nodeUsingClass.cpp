#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

int main()
{
    Node *y = new Node(10);
    // cout << (*y).data << endl;
    cout << y->data << endl;
    return 0;
}