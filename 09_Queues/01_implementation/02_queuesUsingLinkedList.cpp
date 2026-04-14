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

    Node(int val, Node *next1)
    {
        data = val;
        next = next1;
    }
};

class Queue
{
private:
    Node *front, *rear;
    int counter;

public:
    Queue()
    {
        front = rear = nullptr;
        counter = 0;
    }

    bool isEmpty() const
    {
        return front == nullptr;
    }

    void enqueue(int value)
    {
        Node *newNode = new Node(value);
        if (isEmpty())
        {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
        counter++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            throw underflow_error("Queue Underflow\n");
        }

        Node *temp = front;
        front = front->next;
        delete temp;

        if (front == nullptr)
        {
            rear = nullptr;
        }
        counter--;
    }

    int getFront() const
    {
        if (isEmpty())
        {
            throw runtime_error("Queue is Empty\n");
        }
        return front->data;
    }

    int size()
    {
        return counter;
    }

    void display() const
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }

        Node *temp = front;

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
    Queue q;
    try
    {
        q.enqueue(45);
        q.enqueue(5);
        q.enqueue(75);
        q.enqueue(15);
        cout << q.getFront() << endl;
        q.dequeue();
        cout << q.size() << endl;
        q.display();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.dequeue();
    }
    catch (exception &err)
    {
        cout << err.what();
    }
    return 0;
}