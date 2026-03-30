#include <bits/stdc++.h>
using namespace std;

struct Node
{
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
    Node *first = new Node(10);
    cout << first << endl;
    return 0;
}