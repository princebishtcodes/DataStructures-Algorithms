#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int *arr;
    int topIndex;
    int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        arr = new int[capacity];
        topIndex = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    bool isFull() const
    {
        return topIndex == capacity - 1;
    }

    bool isEmpty() const
    {
        return topIndex == -1;
    }

    void push(int value)
    {
        if (isFull())
        {
            throw overflow_error("Stack Overflow \n");
        }
        arr[++topIndex] = value;
    }

    void pop()
    {
        if (isEmpty())
        {
            throw underflow_error("Stack Underflow \n");
        }
        topIndex--;
    }

    int top() const
    {
        if (topIndex == -1)
        {
            return -1;
        }
        return arr[topIndex];
    }

    int size() const
    {
        return topIndex + 1;
    }

    void display()
    {
        for (int i = topIndex; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack st(5);
    try
    {
        st.push(3);
        st.push(5);
        st.push(6);
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