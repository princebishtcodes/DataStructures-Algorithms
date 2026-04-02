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

Node *arraytoLinkedList(int arr[], int n)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
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
    cout << "NULL";
    cout << endl;
}

Node *insertionAtTail(Node *head, int value)
{
    if (head == nullptr)
    {
        Node *newElement = new Node(value);
        return newElement;
    }
    Node *newElement = new Node(value);
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = newElement;
    return head;
}

int main()

{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Before Insertion : ";
    Node *head = arraytoLinkedList(arr, 5);
    traversal(head);
    cout << "After Insertion : ";
    head = insertionAtTail(head, 2);
    traversal(head);
    return 0;
}