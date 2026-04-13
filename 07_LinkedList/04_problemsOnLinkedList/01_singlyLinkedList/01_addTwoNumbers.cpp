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

Node *addTwoNumbers(Node *l1, Node *l2)
{
    Node *dummyNode = new Node(-1);
    Node *t1 = l1, *t2 = l2;
    Node *curr = dummyNode;
    int carry = 0;
    while (t1 != nullptr || t2 != nullptr)
    {
        int sum = carry;
        if (t1)
            sum += t1->data;
        if (t2)
            sum += t2->data;
        Node *newNode = new Node(sum % 10);
        carry = sum / 10;
        curr->next = newNode;
        curr = curr->next;
        if (t1)
            t1 = t1->next;
        if (t2)
            t2 = t2->next;
    }
    if (carry)
    {
        Node *newNode = new Node(carry);
        curr->next = newNode;
    }
    return dummyNode->next;
}

int main()
{
    vector<int> arr1 = {3, 5};
    Node *l1 = arrayToDoublyLL(arr1);
    vector<int> arr2 = {4, 5, 9, 9};
    Node *l2 = arrayToDoublyLL(arr2);
    traversal(l1);
    traversal(l2);

    cout << "After Operation : \n";

    Node *finalList = addTwoNumbers(l1, l2);

    traversal(finalList);
    return 0;
}