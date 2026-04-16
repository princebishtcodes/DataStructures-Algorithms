#include <bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return -1;
}

string infixToPostfix(string s)
{
    stack<char> st;
    string ans;

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') ||
            (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9'))
        {
            ans += ch;
        }

        else if (ch == '(')
        {
            st.push(ch);
        }

        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            if (!st.empty())
                st.pop();
        }

        else
        {
            while (!st.empty() &&
                   (priority(ch) < priority(st.top()) ||
                    (priority(ch) == priority(st.top()) && ch != '^')))
            {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << infixToPostfix(s) << endl;
    return 0;
}