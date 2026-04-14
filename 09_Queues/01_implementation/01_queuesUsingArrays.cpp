#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int *arr;
    int front, rear, capacity, count;

public:
    Queue(int size)
    {
        capacity = size;
        arr = new int[capacity];
        front = count = 0;
        rear = -1;
    }
    ~Queue()
    {
        delete[] arr;
    }

    bool isFull() const
    {
        return count == capacity;
    }

    bool isEmpty() const
    {
        return count == 0;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            throw overflow_error("Queue Overflow \n");
        }
        rear = (rear + 1) % capacity;
        arr[rear] = value;
        count++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            throw underflow_error("Queue Underflow \n");
        }
        front = (front + 1) % capacity;
        count--;
    }

    int getFront() const
    {
        if (isEmpty())
        {
            throw runtime_error("Queue is Empty \n");
        }
        return arr[front];
    }

    void display() const
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = 0; i < count; i++)
        {
            int index = (front + i) % capacity;
            cout << arr[index] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queue q(5);
    try
    {
        q.enqueue(5);
        q.enqueue(3);
        q.enqueue(8);
        q.enqueue(12);
        cout << q.getFront() << endl;
        q.display();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.display();
        q.dequeue();
        q.dequeue();
    }
    catch (exception &err)
    {
        cout << err.what() << endl;
    }
    return 0;
}