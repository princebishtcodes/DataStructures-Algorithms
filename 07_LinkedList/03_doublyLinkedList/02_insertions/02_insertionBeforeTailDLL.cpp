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
    Node *head = new Node(arr[0]);
    Node *previous = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        temp->prev = previous;
        previous->next = temp;
        previous = previous->next;
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

Node *insertionBeforeTailDLL(Node *head, int value)
{
    if (head == nullptr)
    {
        return new Node(value);
    }
    if (head->next == nullptr)
    {
        if (head == nullptr)
        {
            return new Node(value);
        }
        Node *newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *newNode = new Node(value);
    Node *prevNode = tail->prev;
    prevNode->next = newNode;
    newNode->prev = prevNode;
    newNode->next = tail;
    tail->prev = newNode;
    return head;
}

int main()
{
    vector<int> arr = {10};
    Node *head = arrayToDoublyLL(arr);
    cout << "Before Insertion : \n";
    traversal(head);
    cout << "After Insertion : \n";
    head = insertionBeforeTailDLL(head, 5);
    traversal(head);
    return 0;
}
