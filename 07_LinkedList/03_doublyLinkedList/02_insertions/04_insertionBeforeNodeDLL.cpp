#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

Node *arrayToDoublyLL(vector<int> &arr)
{
    if (arr.empty())
        return nullptr;

    Node *head = new Node(arr[0]);
    Node *previous = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->prev = previous;
        previous->next = temp;
        previous = temp;
    }
    return head;
}

void traversal(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void insertionBeforeNodeDLL(Node *node, int value)
{
    if (node == nullptr)
        return;
    Node *newNode = new Node(value);
    Node *prevNode = node->prev;

    prevNode->next = newNode;
    newNode->prev = prevNode;
    newNode->next = node;
    node->prev = newNode;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Node *head = arrayToDoublyLL(arr);

    cout << "Before Insertion : \n";
    traversal(head);

    cout << "After Insertion : \n";
    insertionBeforeNodeDLL(head->next, 60);

    traversal(head);
    return 0;
}