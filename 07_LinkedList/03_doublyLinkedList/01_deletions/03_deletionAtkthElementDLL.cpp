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

Node *deletionAtkthElementDLL(Node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    int counter = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        counter++;
        if (counter == k)
        {
            break;
        }
        temp = temp->next;
    }
    Node *previous = temp->prev;
    Node *front = temp->next;
    if (front == nullptr && previous == nullptr)
    {
        return nullptr;
    }
    else if (front == nullptr)
    {
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        Node *previous = temp->prev;
        previous->next = nullptr;
        temp->prev = nullptr;
        delete temp;
        return head;
    }
    else if (previous == nullptr)
    {
        Node *node = head;
        head = head->next;
        node->prev = nullptr;
        node->next = nullptr;
        delete node;
        return head;
    }

    previous->next = front;
    front->prev = previous;
    temp->next = temp->prev = nullptr;
    delete temp;
    return head;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Node *head = arrayToDoublyLL(arr);
    cout << "Before Deletion : \n";
    traversal(head);
    cout << "After Deletion : \n";
    head = deletionAtkthElementDLL(head, 5);
    traversal(head);
    return 0;
}
