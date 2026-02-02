#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Stack container follows LIFO (Last In First Out) order of insertion and deletion.
    stack<int> st;

    // INSERTION
    // 1. st.push(23) : Pushes the Element acc to LIFO at the top
    st.push(23); // {23};
    st.push(45); // {45, 23};
    st.push(67); // {67, 45, 23};
    st.push(89); // {89, 67, 45, 23};

    // 2. st.emplace(85) : Pushes the Element directly at the top
    st.emplace(43); // {43, 89, 67, 45, 23};

    // DELETION
    // 1. st.pop() : Removes the Element which entered latest, LIFO
    st.pop(); // {89, 67, 45, 23};

    // ACCESSING
    // Using st.top() : we can see the top element
    cout << st.top() << endl;

    // swapping
    stack<int> st1, st2;
    st1.swap(st2);
    return 0;
}