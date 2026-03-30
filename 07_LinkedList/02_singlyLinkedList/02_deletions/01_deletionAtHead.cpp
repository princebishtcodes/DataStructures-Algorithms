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
        cout << temp->data;
        if (temp->next != nullptr)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

Node *deletionAtHead(Node *head)
{

    Node *temp = head;
    if (temp == NULL)
    {
        return head;
    }
    head = temp->next;
    delete temp;
    return head;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Before Deletion : ";
    Node *head = arraytoLinkedList(arr, 5);
    traversal(head);
    cout << "After Deletion : ";
    head = deletionAtHead(head);
    traversal(head);
    return 0;
}