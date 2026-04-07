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

Node *deletionAtHeadDLL(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
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
    head = deletionAtHeadDLL(head);
    traversal(head);
    return 0;
}
