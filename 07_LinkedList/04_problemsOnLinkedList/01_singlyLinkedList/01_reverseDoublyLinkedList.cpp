#include <bits/stdc++.h>
#include <stack>
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

// Brute Force: Use Stack
// Node *reverseDoublyLinkedList(Node *head)
// {
//     if (head == nullptr)
//         return head;
//     stack<int> st;
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         st.push(temp->data);
//         temp = temp->next;
//     }
//     temp = head;
//     while (temp != nullptr)
//     {
//         temp->data = st.top();
//         st.pop();
//         temp = temp->next;
//     }
//     return head;
// }

// Optimal Approach: Use of Swapping
Node *reverseDoublyLinkedList(Node *head)
{
    if (head == nullptr)
        return head;
    Node *currNode = head;
    Node *prevNode = nullptr;
    while (currNode != nullptr)
    {
        prevNode = currNode->prev;
        currNode->prev = currNode->next;
        currNode->next = prevNode;
        currNode = currNode->prev;
    }
    return prevNode->prev;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50};
    Node *head = arrayToDoublyLL(arr);

    cout << "Before Reversal : \n";
    traversal(head);

    cout << "After Reversal : \n";
    head = reverseDoublyLinkedList(head);

    traversal(head);
    return 0;
}