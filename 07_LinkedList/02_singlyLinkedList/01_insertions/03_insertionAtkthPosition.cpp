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

Node *insertionAtkthPosition(Node *head, int k, int value)
{
    if (head == nullptr)
    {
        if (k == 1)
        {
            return new Node(value);
        }
    }
    if (k == 1)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        return newNode;
    }
    int counter = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        counter++;
        if (counter == k - 1)
        {
            Node *newNode = new Node(value);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()

{
    int arr[5] = {10, 20, 30, 40, 50};
    cout << "Before Insertion : ";
    Node *head = arraytoLinkedList(arr, 5);
    traversal(head);
    cout << "After Insertion : ";
    head = insertionAtkthPosition(head, 6, 25);
    traversal(head);
    return 0;
}