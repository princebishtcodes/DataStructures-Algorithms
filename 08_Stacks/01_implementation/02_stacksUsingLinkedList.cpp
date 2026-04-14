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

class Stack
{
private:
    Node *topNode;

public:
    Stack()
    {
        topNode = nullptr;
    }

    bool isEmpty() const
    {
        return topNode == nullptr;
    }

    void push(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = topNode;
        topNode = newNode;
    }

    void pop()
    {
        if (isEmpty())
        {
            throw underflow_error("Stack Underflow");
        }
        Node *temp = topNode;
        topNode = topNode->next;
        delete temp;
    }

    int top() const
    {
        if (isEmpty())
        {
            throw runtime_error("Stack is Empty");
        }
        return topNode->data;
    }

    void display() const
    {
        if (isEmpty())
        {
            cout << "Stack is empty\n";
            return;
        }

        Node *temp = topNode;

        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main()
{
    Stack st;
    try
    {
        st.push(5);
        st.push(76);
        st.push(32);
        cout << st.top() << endl;
        st.display();
        st.pop();
        st.pop();
        st.pop();
        st.pop();
    }
    catch (exception &err)
    {
        cout << err.what() << endl;
    }
    return 0;
}