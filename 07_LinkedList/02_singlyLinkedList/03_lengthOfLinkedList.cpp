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
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int lengthofLinkedList(Node *head)
{
    Node *temp = head;
    int counter = 0;
    while (temp != nullptr)
    {
        counter++;
        temp = temp->next;
    }
    return counter;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    Node *head = arraytoLinkedList(arr, 5);
    cout << "The First Element is : " << head->data << endl;
    traversal(head);
    cout << "The Length of Linked List : " << lengthofLinkedList(head) << endl;
    return 0;
}