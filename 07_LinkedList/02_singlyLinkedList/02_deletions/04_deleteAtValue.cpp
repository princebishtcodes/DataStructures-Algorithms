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

Node *deletionAtValue(Node *head, int value)
{
    if (head == nullptr)
        return nullptr;
    if (head->data == value)
    {
        if (head == nullptr)
            return head;
        Node *temp = head;
        head = temp->next;
        delete temp;
        return head;
    }
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main()

{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Before Deletion : ";
    Node *head = arraytoLinkedList(arr, 5);
    traversal(head);
    cout << "After Deletion : ";
    head = deletionAtValue(head, 20);
    traversal(head);
    return 0;
}